
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
int n[5];
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
        cout<<lon[i]<<endl;
        n[i]=i;
}
for(int i=4;i>= 0;i--)
{
    for(int y=0;y<i;y++)
    {
        if ( lon[y]> lon[y+1])
        {
          buff=lon[y];
          lon[y]=lon[y+1];
          lon[y+1]=buff;
          buff=n[y];
          n[y]=n[y+1];
          n[y+1]=buff;
        }
    }
}
int a;
for(int i=0;i<5;i++)
{
    a=n[i];
    cout<<bk[a].name<<endl;
}
return 0;
}
