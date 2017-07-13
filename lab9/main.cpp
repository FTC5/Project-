#include <stdlib.h>
#include <cstdio>
#include <iostream>
#include <tchar.h>
#include <stdio.h>
#include <cstring>
#include <conio.h>
using namespace std;
struct catalog
		  {
			  char name[20];
			  char manufacturer[30];
			  int date;
			  int end_date;
			  int price;
			  int weight;
			  char units_weight[5];
			  char type[35];
		  }tabl[2];
		   int n=2;
void read(struct catalog *v,int *n);
int cmp(struct catalog *v,int a,int *N,int n);
int write(struct catalog *v,int *N,int a);
int search_name(char *search,struct catalog *v,int n,int a);
int search_manufacturer(char *search,struct catalog *v,int n,int a);
int out(struct catalog *v,int i);
int buy(struct catalog *v,int n,int a);
int main()
{
short a=0;
int sum=0;
int *N=new int[n];
for(int i=0;i<n;i++)
{
    N[i]=i;
}
char *search=new char[30];
while(a!=10)
{
	cout<<"read=1;write=2;search_name=3;search_manufacturer=4;sort=5;exit>5 ("<<sum<<"$)"<<endl;
	cin>>a;
	if(a==2)
	{

	    for(int i=0;i<n;i++)
        {
            N[i]=i;
            cout<<"name"<<endl;
            cin>>tabl[i].name;
            cout<<"Manufacturer"<<endl;
            cin>>tabl[i].manufacturer;
            cout<<"date"<<endl;
            cin>>tabl[i].date;
            cout<<"end_date"<<endl;
            cin>>tabl[i].end_date;
            cout<<"price"<<endl;
            cin>>tabl[i].price;
            cout<<"weight"<<endl;
            cin>>tabl[i].weight;
            cout<<"units_weight"<<endl;
            cin>>tabl[i].units_weight;
            cout<<"type"<<endl;
            cin>>tabl[i].type;
            cout<<"-------------------------------------------"<<endl;
        }
		write(tabl,N,a);
	}
	else if(a==1)
	{
		read(tabl,&n);
	}
	else if(a==4)
	{
		cout<<"search_manufacturer : ";
		cin>>search;
		sum+=search_manufacturer(search,tabl,n,a);
	}
	else if(a==3)
	{
		cout<<"search_name  : ";
		cin>>search;
		sum+=search_name(search,tabl,n,a);
	}
	else if(a==5)
    {
        cmp(tabl,a,N,n);
    }
    else
    {
    break;
    }
}
    cout<<sum<<"$"<<endl;
    system("pause");
	return 0;
}
void read(struct catalog *v,int *n)
{
    system("cls");
  FILE*f=fopen("catalog.bin","rb");
	int  &n1=*n;
	n1=0;
	while(!feof(f))
	{
		fread(&v[n1],sizeof(catalog),1,f);
		out(v,n1);
		n1++;
	}
	fclose(f);
}
write(struct catalog *v,int *N,int a)
{
	FILE*f=fopen("catalog.bin","wb");
	for(int i=0;i<n;i++)
	{
	    a=N[i];
		fwrite(&v[a],sizeof(catalog),1,f);
	}
	 fclose(f);
	return 0;
}

search_name(char *search,struct catalog *v,int n,int a )
{
   FILE*f=fopen("catlog.bin","wb");
	for(int i=0;i<n;i++)
	{
	 if(strcmp(v[i].name,search)==0)
		{
			fwrite(&v[i],sizeof(v[i]),1,f);
			fclose(f);
			out(v,i);
			return buy(v,i,a);
		}
	}
	fclose(f);
	return 0;
}
 out(struct catalog *v,int i)
 {
	cout<<"Name :"<<v[i].name<<endl;
	cout<<"Manufacturer :"<<v[i].manufacturer<<endl;
	cout<<"Release date :"<<v[i].date<<endl;
	cout<<"End date :"<<v[i].end_date<<endl;
	cout<<"Price :"<<v[i].price<<endl;
	cout<<"Weight :"<<v[i].weight<<endl;
	cout<<"Mass unit :"<<v[i].units_weight<<endl;
	cout<<"Type :"<<v[i].type<<endl;

 }
search_manufacturer(char *search,struct catalog *v,int n,int a)
{
   FILE*f=fopen("catlog.bin","wb");
	for(int i=0;i<n;i++)
	{
	 if(strcmp(v[i].manufacturer,search)==0)
		{
			fwrite(&v[i],sizeof(v[i]),1,f);
			fclose(f);
			out(v,i);
			return buy(v,i,a);
		}
	}
	fclose(f);
	return 0;
}
buy(struct catalog *v,int n,int a)
{
    a=0;
  cout<<"woudl you like to buy ?(YES(1)/NO(0)) ";
  cin>>a;
  if(a==1)
  {
      return v[n].price;
  }
  else
  {
      return 0;
  }
}
cmp(struct catalog *v,int a,int *N,int n)
{
    for(int y=0;y<n;y++)
    {
        a=N[y];
       for(int i=0;i<n;i++)
       {
           if(v[a].name<v[i].name)
           {
               N[a]=i;
               N[i]=a;
               a=N[y+1];
           }
       }
    }
    write(v,N,a);
    return 0;

}

