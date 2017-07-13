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
}stud[9];
int main()
{
    for (int i=0.;i<9;i++)
    {
     cout<<"Name:"; cin>>stud[i].name; cout<<"Average school score:"; cin>>stud[i].mid; cout<<"Exam score"; cin>>stud[i].ex;
        stud[i].allmid=(stud[i].mid+stud[i].ex)/2.;
        cout<<stud[i].allmid<<endl;
    }
    float min[4];
    int A[4];
    int z;
    for (int g=0;g<4;g++)
    {
     min[g]=stud[g].allmid;
    }
    for (int y=0;y<9;y++)
    {
        if(stud[y].allmid<min[0])
        {
            A[0]=y;
            min[0]=stud[y].allmid;
        }
        if(stud[y].allmid<min[1]&&A[0]!=y)
        {
            A[1]=y;
            min[1]=stud[y].allmid;
        }
        if(stud[y].allmid<min[2]&&A[0]!=y&&A[1]!=y)
        {
            A[2]=y;
            min[2]=stud[y].allmid;
        }
        if(stud[y].allmid<min[3]&&A[0]!=y&&A[1]!=y&&A[2]!=y)
        {
            A[3]=y;
            min[3]=stud[y].allmid;
        }

    }
    for (int q=0;q<4;q++)
    {
     z=A[q];
     cout<<"Name:"<<stud[z].name<<"_Average school score:"<<stud[z].mid<<"_Exam score"<<stud[z].ex<<endl;
    }
    getch();
    return 0;
}
