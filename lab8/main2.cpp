#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <fstream>
#include <cstdio>
int bufff(int n1,int n2,char *str,char *buffer);
int vvv(int n1,int n2,char *str);
using namespace std;
int main()
{
    short n1=0,n2=0;
	char *str;
	str=new char[50];
	char * buffer = new char [1];
	gets(str);
	FILE *tabl = fopen("tabl.txt","w");
	fputs(str,tabl);
	fputs("\n", tabl);
	fclose(tabl);
	FILE *f = fopen("buffer.txt","w");
	buffer = strtok(str,".?!");
	fputs(buffer,f);
	fputs("\n", f);
	while (buffer != NULL)
	{
		buffer = strtok(NULL, ".?!");
		fputs(buffer,tabl);
		fputs("\n", f);
	}
	bufff(n1,n2,str,buffer);
	fclose(f);
	return 0;
}
int bufff(int n1,int n2,char *str,char *buffer)
 {
     char *str2;
	str2=new char[50];
    FILE *f = fopen("buffer.txt","r");
	fgets(str,50,f);
	fgets(str2,50,f);
	cout<<str2;
	buffer = strtok(str," ,.;");
	while (buffer != NULL)
	{
	    n1++;
		buffer = strtok(NULL, " ,.;");
	}
	buffer = strtok(str2," ,.;");
	while (buffer != NULL)
	{
	    n2++;
		buffer = strtok(NULL, " ,.;");
	}
	fclose(f);
	vvv(n1,n2,str);
       return 0;
}
vvv(int n1,int n2,char *str)
 {
	FILE *tabl = fopen("tabl.txt","a");
	itoa(n1,str,10);
	fputs(str,tabl);
	fputs("\n", tabl);
	itoa(n2,str,10);
	fputs(str,tabl);
	fputs("\n", tabl);
	fclose(tabl);
	return 0;
 }
