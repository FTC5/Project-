#include <iostream>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main(void)
{
int A[2],f,y;
for( y=0;y<=1;y++)
{
    cin>>A[y];
}
for( f=0;f<=1;f++)
{
cin>>A[f];
}
for(int j=0;j<=1;j++)
{
    cout<<A[j]<<endl;
}
cout<<A[f]<<A[y];
getch();
return 0;
}
