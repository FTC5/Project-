//���� �� ����� � �������(��������)

#include <iostream>
#include <conio.h>
using namespace std;
 int Element (int *arr,int size)
{
	if (size>0)
	{
		return arr[size-1] + Element(arr,size-1);//���� ��������
	}
	else
	    return 0;
}
	int main()
	{
		setlocale(LC_ALL, "rus");
	int size;
	int* arr;//�������� ������ ��� ������
	int a;//����� ��� ��������
	cout<<"������� ����������� �������: "<<endl;
		cin>>size;
		arr=new int[size];//������� ������ � ������
		for(int i=0;i<size;i++)
		{
			cout<<"������� ������� �������: "<<endl;//������ �������� �������
			cin>>arr[i];
		}
 cout<<"������� ����� ��� ��������: "<<endl;
 cin>>a;
 
 for(int i=0;i<size;i++)//��������,���� �� ���������� � ������� � �������
 {
     if(a==arr[i])
         cout<<"����� "<<arr[i]<<" ��������� � "<<i+1<<" �������� ������� �������."<<endl;
         
     else
	 cout<<"����� ����� ���."<<endl;    
 }
 
   system("pause");
   return 0;
}
