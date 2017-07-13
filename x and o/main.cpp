#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cstring>
#include <math.h>
using namespace std;
int test_2(int n,char *place);
int gametable(char *place);
int numberplayer(int n);
int main()
{
char s[3]={"XO"};
int player = 1;
int n;
char *gameplace;
gameplace = new char[9];
 gcvt(123456789,9,gameplace);
 gametable(gameplace);
 for(int i=0;i<9;i++)
 {
  cout<<"player :"<<player<<endl;
  cin>>n;
  n=n-1;
  for(int y=0;y<=1;y++)
  {
      y=0;
    if(gameplace[n]==s[0] || gameplace[n]==s[1] )
        {
            cin>>n;
            n=n-1;
        }
        else if(n>8)
        {
            cin>>n;
            n=n-1;
        }
        else
        {
            break;
        }
  }
  if(player==1)
  {
      gameplace[n]=s[0];
  }
  else if(player==2)
  {
      gameplace[n]=s[1];
  }
  gametable(gameplace);
  n=test_2(player,gameplace);
  player=numberplayer(player);
  if(n==10)
  {
      getch();
      return 0;
  }
 }
 cout<<"Draw!!!!!!!!!!!! +_+";
getch ();
return 0;
}
gametable(char *place)
{
    system("cls");
    cout<<place[0]<<"|"<<place[1]<<"|"<<place[2]<<endl;
    cout<<"-----"<<endl;
    cout<<place[3]<<"|"<<place[4]<<"|"<<place[5]<<endl;
    cout<<"-----"<<endl;
    cout<<place[6]<<"|"<<place[7]<<"|"<<place[8]<<endl;
}
test_2(int n,char *place)
{
    for(int i=0;i<9;i=i+3)
    {
        if(place[i]==place[i+1] && place[i]==place[i+2])
        {
            cout<<"Player ‡‚"<<n<<"win!! ;)"<<endl;
            getch ();
            return 10;
        }
    }
    if(place[7]==place[5] && place[7]==place[3])
    {
        cout<<"Player ‡‚"<<n<<"win!! ;)"<<endl;
        getch ();
        return 10;
    }
    if(place[1]==place[5] && place[1]==place[9])
    {
        cout<<"Player ‡‚"<<n<<"win!! ;)"<<endl;
        getch ();
        return 10;
    }
}
 numberplayer(int n)
 {
     if(n==1)
  {
      n++;
  }
  else if(n==2)
  {
      n--;
  }
  return n;
 }
