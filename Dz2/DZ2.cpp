//Спочатку хотів заповнити масив правильними словами але в такому випадку масив повинен мати багато слів для перевірки.
#include <conio.h>
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
int main()
{
  char str[40]; //ініціалізуємо масив для строки
  short int i=1; //ініціалізуємо лічильник для визначення місця помилки
  char Incorrectword[5][25]; //ініціалізуємо двійковий масив для неправильних слів
  char * buffer = new char [1]; //створюемо буфер в який буде записуватися значення strtok
   strcpy(Incorrectword[0],"aple");//apple
   strcpy(Incorrectword[1],"lkik");//like
   strcpy(Incorrectword[2],"od"); //do
   strcpy(Incorrectword[3],"ton"); //not
   strcpy(Incorrectword[4],"shif"); //fish
  cout<<"Enter the string:"<<endl;
  gets(str); //видобуваемо значення из останьої строки в кансолі
  buffer = strtok(str," ,.-"); //роздиляемо строку по " ,.-"
   while (buffer != NULL)
    {

		for(int y=0;y<5;y++)
        {
			if (strcmp(buffer, Incorrectword[y])==0) //порівнюемо значення двох масивів
			{
              cout << "Error in the "<<i<<" word!"<<endl; //виводимо помилку
            }
		}
		buffer = strtok(NULL, " ,-:");
		i++;
	}
	getch();
	return 0;
}
