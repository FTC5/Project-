#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    float Y,X;
    cout<<"Vedite Chislo X"<<endl;
    cin>>X;
if(X<0)
    {
       Y=2.*X*pow((X-2.),2);
       cout<<"p"<<Y;
    }
if(X==12)
    {
        Y=X/log(exp(X));
        cout<<"r"<<Y;
    }
if(12<X&&X<19)
    {
        Y=cos(132);
        cout<<Y;
    }
            else
            {
                cout<<"Koreniv nemae";
            }


getch ();
return 0;
}
