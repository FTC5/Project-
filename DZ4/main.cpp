#include <iostream>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <cstdio>
#include <fstream>
using namespace std;
int main()
{   short n=0;
    int a=1;
    char *str;
    str=new char[20];
    int v[6];
    char buf[8][20];
    ofstream tabl("tabl.txt");
    while(a!=atoi(str))
    {
        cout<<"vedite parametru (1-exit):"<<endl;
        gets(str);
        if(atoi(str)!=1)
        {
          tabl <<str <<endl;
        }
        n++;
    }
    v[5]=n;
    n=0;
    tabl.close();
    ifstream fin("tabl.txt");
    while(v[5]!=n)
    {
        fin.getline(str, 20);
        strcpy(buf[5],str);
        char * buffer = new char [1];
        buffer = strtok(str," ,.-=");
        while (buffer != NULL)
        {
            cout<<buffer;
                if(atoi(buffer)<=100)
                {
                 for(int i=0;i<5;i++)
                 {
                     if(v[i]<atoi(buffer)  )
                     {
                      strcpy(buf[6],buf[i]);
                      strcpy(buf[i],buf[5]);
                      a=v[i];
                      v[i]=atoi(buffer);
                      itoa(a,buffer,10);
                     a=i+1;
                        for(int y=a;y<5;y++)
                        {
                            strcpy(buf[6],buf[y]);
                            strcpy(buf[y],buf[y-1]);
                        }
                     }
                 }
                }
                buffer = strtok(NULL, " ,-:");
        }
        n++;
    }
    for(int i=0;i<5;i++)
    {
        cout<<buf[i]<<endl;
    }
    system("pause");
    return 0;
}
