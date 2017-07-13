#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{


int x1,y1; //A
int x2,y2; //B
int x3,y3; //C
float A,C,F;
cout<<"A(x1;y1),B(x2;y2),C(x3;y3),BC-gipotenuza"<<endl;
cout<<"Vesty Koordinatu x1 y1 x2 y2 x3 y3"<<endl;
cin>>x1>>y1>>x2>>y2>>x3>>y3;
A=sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
C=sqrt((pow(x3-x2,2))+(pow(y3-y2,2)));
F=A/C;
cout<<"cos="<<F;
getch();
return 0;
}
