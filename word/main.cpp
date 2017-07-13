#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");
 char A[] = {"йцкнгшщзхфвпрлджчсмтбь"};
 char B[] = {"уеїіаоєяию"};
 for(int i=0;i<10;i++)
 {
     cout<<A[i]<<endl;
 }
 char word[20];
 cout<<"Vedite slovo"<<endl;
 cin>>word;
 return 0;

}
