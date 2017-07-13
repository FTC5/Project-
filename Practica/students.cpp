#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;


struct student
{
    char name [100];
    int mid;
    int ex;
    float  allmid;
}stud[3];
int main()
{
    for (int i=0.;i<3;i++)
    {
     cout<<"Name:"; cin>>stud[i].name; cout<<"Average school score:"; cin>>stud[i].mid; cout<<"Exam score"; cin>>stud[i].ex;
        stud[i].allmid=(stud[i].mid+stud[i].ex)/2.;
        cout<<stud[i].allmid<<endl;
    }
 int z=0,A[9]={0,1,2,3,4,5,6,7,8};
 float v=0;
    for (int f =2 ; f >= 0; f--)
  {
    for (int j = 0; j < f; j++)
    {
      if ( stud[j].allmid> stud[j+1].allmid)
      {
        v=stud[j].allmid;
        stud[j].allmid=stud[j+1].allmid;
        stud[j+1].allmid=v;
        z=A[j];
        A[j]=A[j+1];
        A[j+1]=z;
      }
    }
  }
  z=0;
  for (int q=0;q<4;q++)
    {
     z=A[q];
     cout<<"Name:"<<stud[z].name<<"_Average school score:"<<stud[z].mid<<"_Exam score"<<stud[z].ex<<endl;
    }
    getch();
    return 0;
}
