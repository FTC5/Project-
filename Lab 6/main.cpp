#include <conio.h>
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
int main()
{
  char str[40],str2[40];
  char word[7];
  char * buffer = new char [1];
   strcpy(word,"cake");
  cout<<"Enter the string:"<<endl;
  gets(str);
  buffer = strtok(str," ,.-");
   while (buffer != NULL)
    {
        if(strlen(buffer)-strlen(word)==0)
        {
          cout<<word<<" ";
        }
        else
        {
          cout<<buffer<<" ";
        }
		buffer = strtok(NULL, " ,-:");
	}
	gets(str);
	getch();
	return 0;
}
