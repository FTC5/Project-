#include <conio.h>
#include <fstream>
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    char t,s[30];
    for(int i=0;i<30;i++)
    {
     s[i]=t;
    }
    ifstream in("ccpstudi.txt");
    in>>s;
    for(int i=0;i<30;i++)
    {
    if(s[i]==t)
    {
        cout<<" ";
        i=i+1;
    }
     cout<<s[i];
    }
    return 0;
}
