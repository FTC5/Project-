//Есть ли число в массиве(рекурсия)

#include <iostream>
#include <conio.h>
using namespace std;
 int Element (int *arr,int size)
{
	if (size>0)
	{
		return arr[size-1] + Element(arr,size-1);//Сама рекурсия
	}
	else
	    return 0;
}
	int main()
	{
		setlocale(LC_ALL, "rus");
	int size;
	int* arr;//Выделяем память под массив
	int a;//Число для проверки
	cout<<"Введите размерность массива: "<<endl;
		cin>>size;
		arr=new int[size];//Заносим данные в массив
		for(int i=0;i<size;i++)
		{
			cout<<"Введите элемент массива: "<<endl;//Вводим элементы массива
			cin>>arr[i];
		}
 cout<<"Укажите число для проверки: "<<endl;
 cin>>a;
 
 for(int i=0;i<size;i++)//Проверка,есть ли совпадения с числами в массиве
 {
     if(a==arr[i])
         cout<<"Число "<<arr[i]<<" находится в "<<i+1<<" элементе данного массива."<<endl;
         
     else
	 cout<<"Числа здесь нет."<<endl;    
 }
 
   system("pause");
   return 0;
}
