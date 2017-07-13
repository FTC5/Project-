#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
long
int a,b,min,max,z,x,A[19];
z=0;
x=0;
min=20;
max=0;
randomize ();
for (int i=0,n;i<=19;i++)
{
    n=random(20)+1;
    A[i]==n;
    cout<<"___"<<A[i];
}
for (int y=0,b=0,c=1;y<=19;y++)
{
        if(A[b]<A[c])
        {
          z==A[b];
          x==A[c];
          if(z<min)
          {
              min==z;
          }
          if(x>max)
          {
              max==x
          }
          y++;
          b++;

        }
        else If(A[b]>A[c])
        {
          z==A[c];
          x==A[b];
          if(z<min)
          {
              min==z;
          }
          if(x>max)
          {
              max==x
          }
          y++;
          b++;

        }

}
cout<<"min="<<min<<endl;
cout<<"max="<<max<<endl;
int sum;
sum=min+max;
cout<<"sum="<<sum<<endl;
getch();
return 0;
}
