#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
    int n,i=0,x=2,e=pow(10,-5);
    float b=1.1,y;
    cout<<"Vedite chislo n"<<endl;
    cin>>n;
    if(n>0)
    {
        while(i<n)
            {
            y=b-(pow(b,4)-x+log(x))/(4*pow(b,3));
            b=y;
            i++;
            }
        cout<<"y="<<y;
    }
    else if(n==0)
    {
        cout<<"y="<<b;
    }
    else
    {
        cout<<"ERROR";
    }

    getch();
    return 0;
}
