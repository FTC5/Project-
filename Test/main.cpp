#include <stdlib.h>
#include <cstdio>
#include <iostream>
#include <tchar.h>
#include <stdio.h>
#include <cstring>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b;
    for(int i=4;i>=0;i--)
    {
        b=a/pow(10,i);

        cout<<b<<endl;
        a=a-(b*pow(10,i)-0.4);
    }
  return 0;
}
