#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <dirent.h>
#include <cstring>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");
 char B[41] = {"BCDFGHJKLMNPQRSTVWXZbcdfghjklmnpqrstvwxz"}; //���������� ��� ������ �� ������ ����� (������ � ���������)
 char A[13] = {"AEIOUYaeiouy"};
 char word[20]; //���������� ������ � ����� ���� ����������� �����
 int z=0,r=0,n=0; //��������� ��������� (������� �������� ������� ����������� ������� ������)
 cout<<"������ �����"<<endl;
 cin>>word;
 n=strlen(word); //������ ������� ������
 for(int i=0;i<n;i++)
 {
     for(int y=0;y<40;y++)
     {
         if(B[y]==word[i]) //��������� �������� ������
         {
             z++; //��������� �������� ���� �������� �������
         }
         if(A[y]==word[i] && y<13)
         {
             r++;
         }

     }
 }
 cout<<"�������� :"<<r<<" ����������� :"<<z<<endl; //�������� ������� �������� � �������
 return 0;

}
