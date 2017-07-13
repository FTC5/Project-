#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <cstdio>
using namespace std;
int mass(char *str,char *wd,char *buffer);
int main()
{
  char *str = new char[20]; //≥н≥ц≥ал≥зуЇмо масив дл€ строки
  char *word = new char[10]; //≥н≥ц≥ал≥зуЇмо масив дл€ слова €ке ми будемо шукати
  char * buffer = new char [1];// ≥н≥ц≥ал≥зуемо масив €кий буду слугувати у €кост≥ буфера

  cout<<"vedite stroku :";
  gets(str);
  cout<<"vedite slovo :";
  cin>>word;
  buffer = strtok(str," ,.-"); //розд≥л€эмо строку на лексеми
  mass(str,word,buffer); //викликаемо ф-ю
  return 0;
}
mass(char *str,char *wd,char *buffer )
{

    if(buffer == NULL)//€кщо лексеми зак≥нчилис€ виводимо FALSE(0)
    {
         cout<<"False";
            return 0;
    }

    if (strcmp(buffer,wd)==0)//€кщо елементи сп≥впадають виводимо TRUE(1)
    {
    cout <<"True";
    return 0;
    }
     return mass(str,wd,buffer = strtok(NULL, " ,-:"));

}

