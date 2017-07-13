#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <cstring>

using namespace std;
int suma(int *N);
int main()
{
    int num1,num2;//ініціалізуємо дві змінні для збереження даних
     int *N = new int[3]; //ініціалізуємо масив з трома елементами
 cout<<"vedite chislo 1:";
 cin>>N[0];
 cout<<"vedite chislo 2:";
 cin>>N[1];
 num1=N[0];//зберігаємо дані як будуть втрачені
 num2=N[1];
 suma(N);
 N[0]=num1;//повертаємо дані назад у масив
 N[1]=num2;
 for(int i=0;i<3;i++)
 {
     cout<<N[i]<<endl; //виводимо елементи масиву
 }
 getch();
 return 0;
}
int suma(int *N)
{
      if((N[0]%10)%2==0 && (N[1]%10)%2==0)
        {
            N[2]+=(N[0]%10)+(N[1]%10); //додаемо парні елементи чисел
        }
        N[0]=N[0]/10;
        N[1]=N[1]/10;
        if(N[0]==0 || N[1]==0)
        {
            return 0;
        }
    return suma(N); //визиваемо функцію доки один із елементів масиву не буду дорівнювати нулю
}

