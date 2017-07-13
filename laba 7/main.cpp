#include <conio.h>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;
int read(char *str);
int out(char *str);
int del(int n,char *str,char *del,char *buffer);
int task(int *N,char *str,char *buffer);
int main()
{
    int *N = new int[2];
    int n=0;
    char *buffer = new char [1];
    char *word = new char[15];
    char *str = new char[50];

    while (n!=5)
    {
        cout<<"1-read,2-cout,3-delete,4-task,5-break"<<endl;
        cin>>n;
        if(n==1)
        {
            cout<<"enter the string"<<endl;
            read(str);
        }
        if(n==2)
        {
            out(str);
        }
        if(n==3)
        {
            del(n,str,word,buffer);
        }
        if(n==4)
        {
            task(N,str,buffer);
        }
    }

    return 0;
}
read(char *str)
{
    getchar();
    gets(str);
    return 0;
}
out(char *str)
{
  cout<<str<<endl;
  return 0;
}
del(int n,char *str,char *del,char *buffer)
{cout<<"_"<<endl;
    short w;
    cout<<"1-word number,2-word"<<endl;
    cin>>n;
    switch(n)
    {
        case 1:
        {
            cin>>n;
            buffer = strtok(str," ,.-");
            while (buffer != NULL)
            {
                if (n!=w)
                {
                cout <<buffer<<endl;
                }
                w++;
                 buffer = strtok(NULL, " ,-:");
            }
            read(str);
            break;
        }
        case 2:
        {
            cin>>del;
            buffer = strtok(str," ,.-");
            while (buffer != NULL)
            {
                n = strcmp(buffer,del);
                if (n!=0)
                {
                    cout<<buffer<<endl;
                }
                 buffer = strtok(NULL, " ,-:");
            }
            read(str);
            break;
        }
    }
}
task(int *N,char *str,char *buffer)
{
    cout<<"Enter the number"<<endl;
    cin>>N[0];
    buffer = strtok(str," ,.-");
            while (buffer != NULL)
            {
                if (N[0]==atoi(buffer))
                {
                    N[1]+=1;
                }
                 buffer = strtok(NULL, " ,-:");
            }
            cout<<"_"<<endl;
            cout<<N[0]<<endl;
            cout<<"_"<<endl;
            cout<<N[1]<<endl;
}
