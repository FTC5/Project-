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
 char B[41] = {"BCDFGHJKLMNPQRSTVWXZbcdfghjklmnpqrstvwxz"}; //ініціалізуємо два массив які містять літери (голосні і приголосні)
 char A[13] = {"AEIOUYaeiouy"};
 char word[20]; //Ініціалізуємо массив в якому буде знаходитися слово
 int z=0,r=0,n=0; //Створюємо лічильники (кількість голосних кількість приголосних довжина строки)
 cout<<"Введіть слово"<<endl;
 cin>>word;
 n=strlen(word); //рахуємо довжину строки
 for(int i=0;i<n;i++)
 {
     for(int y=0;y<40;y++)
     {
         if(B[y]==word[i]) //порівнюемо елементи масивів
         {
             z++; //збільшуемо лічильник якщо елементи однакові
         }
         if(A[y]==word[i] && y<13)
         {
             r++;
         }

     }
 }
 cout<<"Голосних :"<<r<<" Приголосних :"<<z<<endl; //виводимо отримані значення в консоль
 return 0;

}
