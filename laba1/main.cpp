#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    float x,y;
    cout<<"Vesty chislo x"<<endl;
    cin>>x;
    y=13.4*cos(x)*sin(x*x-2.25);
    cout<<y<<endl;
    getch();
    return 0;

}
