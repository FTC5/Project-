#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <cstring>

using namespace std;
int suma(int *N);
int main()
{
    int num1,num2;//���������� �� ���� ��� ���������� �����
     int *N = new int[3]; //���������� ����� � ����� ����������
 cout<<"vedite chislo 1:";
 cin>>N[0];
 cout<<"vedite chislo 2:";
 cin>>N[1];
 num1=N[0];//�������� ��� �� ������ �������
 num2=N[1];
 suma(N);
 N[0]=num1;//��������� ��� ����� � �����
 N[1]=num2;
 for(int i=0;i<3;i++)
 {
     cout<<N[i]<<endl; //�������� �������� ������
 }
 getch();
 return 0;
}
int suma(int *N)
{
      if((N[0]%10)%2==0 && (N[1]%10)%2==0)
        {
            N[2]+=(N[0]%10)+(N[1]%10); //������� ���� �������� �����
        }
        N[0]=N[0]/10;
        N[1]=N[1]/10;
        if(N[0]==0 || N[1]==0)
        {
            return 0;
        }
    return suma(N); //��������� ������� ���� ���� �� �������� ������ �� ���� ���������� ����
}

