#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <cstdio>
using namespace std;
int mass(char *str,char *wd,char *buffer);
int main()
{
  char *str = new char[20]; //���������� ����� ��� ������
  char *word = new char[10]; //���������� ����� ��� ����� ��� �� ������ ������
  char * buffer = new char [1];// ����������� ����� ���� ���� ��������� � ����� ������

  cout<<"vedite stroku :";
  gets(str);
  cout<<"vedite slovo :";
  cin>>word;
  buffer = strtok(str," ,.-"); //��������� ������ �� �������
  mass(str,word,buffer); //���������� �-�
  return 0;
}
mass(char *str,char *wd,char *buffer )
{

    if(buffer == NULL)//���� ������� ���������� �������� FALSE(0)
    {
         cout<<"False";
            return 0;
    }

    if (strcmp(buffer,wd)==0)//���� �������� ���������� �������� TRUE(1)
    {
    cout <<"True";
    return 0;
    }
     return mass(str,wd,buffer = strtok(NULL, " ,-:"));

}

