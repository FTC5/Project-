#include <iostream>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <cstdio>
#include <fstream>
using namespace std;
struct LIST{ //��������� ��������� � ������
char Things;
int Points;
}lit[6];

int main()
{
int n=0;
    ofstream tabl("LIST.txt"); //��������� ���� ��� ���� ���� ������������ ����
   for(int i=0;i<6;i++) //���������� ���������
   {
       cout<<"THINGS :"<<endl;
       cin>>lit[i].Things;
       cout<<"Points :"<<endl;
       cin>>lit[i].Points;
       tabl <<lit[i].Things<<endl;
       tabl <<lit[i].Points<<endl;
   }
   n=lit[0].Points;
   for(int i=0;i<6;i++) //��������� �������� �������� ����� ����
   {
       if(n>lit[i].Points)
       {
           n==lit[i].Points;
       }

   }
   for(int i=0;i<6;i++) //�������� ������� ������ ����
   {
       if(lit[i].Points!=n)
       {
           cout<<lit[i].Things<<" : "<<lit[i].Points<<endl;
       }
   }

    system("pause");
    return 0;
}
