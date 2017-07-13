#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <fstream>
using namespace std;
int bufff(int n1,int n2,char *str,char *buffer);
int vvv(int n1,int n2);
int main()
{
	short n1=0,n2=0;
	char *str;
	str=new char[50];
	char * buffer = new char [1];
	gets(str);
	ofstream tabl("tabl.txt");
	tabl <<str<<endl;
    tabl.close();
	ofstream buff("buffer.txt");
	buffer = strtok(str,".?!");
	buff <<buffer<<endl;
	while (buffer != NULL)
	{
		buffer = strtok(NULL, ".?!");
		buff <<buffer<<endl;
	}
	buff.close();
	bufff(n1,n2,str,buffer);
	getch();
	return 0;
}
int bufff(int n1,int n2,char *str,char *buffer)
 {
    ifstream fin("buffer.txt");
	fin.getline(str, 50);
	buffer = strtok(str," ,.;");
	while (buffer != NULL)
	{
	    n1++;
		buffer = strtok(NULL, " ,.;");
	}
	fin.getline(str, 50);
	buffer = strtok(str," ,.;");
	while (buffer != NULL)
	{
	    n2++;
		buffer = strtok(NULL, " ,.;");
	}
	vvv(n1,n2);
	fin.close();
       return 0;
}

 vvv(int n1,int n2)
 {
	ofstream tabl("tabl.txt",ios_base::app);
	tabl << n1 <<endl;
	tabl << n2 <<endl;
	return 0;
 }
