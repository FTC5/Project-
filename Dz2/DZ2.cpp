//�������� ���� ��������� ����� ����������� ������� ��� � ������ ������� ����� ������� ���� ������ ��� ��� ��������.
#include <conio.h>
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
int main()
{
  char str[40]; //���������� ����� ��� ������
  short int i=1; //���������� �������� ��� ���������� ���� �������
  char Incorrectword[5][25]; //���������� �������� ����� ��� ������������ ���
  char * buffer = new char [1]; //��������� ����� � ���� ���� ������������ �������� strtok
   strcpy(Incorrectword[0],"aple");//apple
   strcpy(Incorrectword[1],"lkik");//like
   strcpy(Incorrectword[2],"od"); //do
   strcpy(Incorrectword[3],"ton"); //not
   strcpy(Incorrectword[4],"shif"); //fish
  cout<<"Enter the string:"<<endl;
  gets(str); //����������� �������� �� ������� ������ � ������
  buffer = strtok(str," ,.-"); //���������� ������ �� " ,.-"
   while (buffer != NULL)
    {

		for(int y=0;y<5;y++)
        {
			if (strcmp(buffer, Incorrectword[y])==0) //��������� �������� ���� ������
			{
              cout << "Error in the "<<i<<" word!"<<endl; //�������� �������
            }
		}
		buffer = strtok(NULL, " ,-:");
		i++;
	}
	getch();
	return 0;
}
