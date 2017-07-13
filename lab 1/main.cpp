#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
    float a,b,c,x,x1,x2,F,D;
    cout<<"Vedite a b c (a^2 + 2*b +c^2)"<<endl;
    cin>>a>>b>>c;
    if(a==0&&b==0&&c==0)
    {
        cout<<"Pomulka 0=0";
         getch();
        return 0;
    }
    if(a==0&&b==0)
    {
        cout<<"Pomulka c=0";
         getch();
        return 0;
    }
    if(a==0&&c==0)
    {
        cout<<"x=0";
         getch();
        return 0;
    }
    if(b==0&&c==0)
    {
        cout<<"x=0";
         getch();
        return 0;
    }
    if(a==0)
    {
        x=(-c)/b;
        cout<<x;
        getch();
        return 0;
    }
    if(b==0)
    {
        x=(-c)/a;
        cout<<x;
        getch();
        return 0;
    }
    if(c==0)
    {
        cout<<"x=0";
        getch();
        return 0;
    }
    F=b*b-4*a*c;
    if(F==0)
    {
        x=(-b)/2;
        cout<<x;
         getch();
        return 0;
    }
    if(F<0)
    {
        cout<<"Pomulka F(descriminant)<0";
    }
    else
    {
        D=sqrt(F);
        x1=((-b)-D)/2;
        x2=((-b)+D)/2;
        cout<<x1<<x2;
    }
    getch();
    return 0;
}
