#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
struct book{
char name[20];
char type[20];
int age;
}bk[5];
using namespace std;
int main()
{
int lon[5];
int buff;
for(int i=0;i<5;i++)
{
        cout<<"Name :";
        cin>>bk[i].name;
        cout<<"Type :";
        cin>>bk[i].type;
        cout<<"Age :";
        cin>>bk[i].age;
        lon[i]=strlen(bk[i].name);
}
for(int i=4;i>= 0;i--)
{
    for(int y=0;y<i;y++)
    {
        if ( lon[i]> lon[i+1])
        {
          buff=lon[i];
          lon[i]=lon[i+1];
          lon[i+1]=buff;
          buff=bk[i];
          bk[i]=bk[i+1];
          bk[i+1]=buff;
        }
    }
}
int a;
for(int i=0;i<5;i++)
{
    cout<<bk[i].name<<endl;
}
return 0;
}

