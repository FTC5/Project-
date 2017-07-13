#include <iostream>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main(void)
{
int a,m,p,z,x,b,c,A[19];
b=0;
c=1;
z=0;
x=0;
m=20;
p=0;

for (int i=0,n;i<19;i++)
{
    cin>>A[i];
}
int y;
y=0;
while(y<19)
{
        z==A[b];
        x==A[c];
        cout<<z<<x;
        if(z<x)
        {
          if(z<m)
          {
              m==z;
          }
          if(x>p)
          {
              p==x;
          }
          y++;
          b++;
        }
        if(z>x)
        {
          if(x<m)
          {
              m==z;
          }
          if(z>p)
          {
              p==x;
          }
          y++;
          b++;
        }
        z=0;
        x=0;
        y++;


}
cout<<"min="<<m<<endl;
cout<<"max="<<p<<endl;
int sum;
sum=m+p;
cout<<"sum="<<sum<<endl;
getch();
return 0;
}
