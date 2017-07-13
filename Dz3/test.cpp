#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <cstring>

using namespace std;
int suma(int *N);
int main()
{
     int *N = new int[3];
 cout<<"vedite chislo 1:";
 cin>>N[0];
 cout<<"vedite chislo 2:";
 cin>>N[1];
 suma(N);
 for(int i=0;i<3;i++)
 {
     cout<<N[i]<<endl;
 }
 getch();
 return 0;
}
int suma(int *N)
{
      if((N[0]%10)%2==0 && (N[1]%10)%2==0)
        {
            N[2]=(N[0]%10)+(N[1]%10);
        }
        N[0]=N[0]/10;
        N[1]=N[1]/10;
        if(N[0]==0 || N[1]==0)
        {
            return 0;
        }


    /*a=0;
    while(n>0)
    {
        a=(a*10)+n%10;
        n=n/10;
    }
    n=a;*/
    return suma(N);
}

