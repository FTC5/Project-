#include <iostream>

using namespace std;

int main()
{
     cout<< "Vvod: ";
     char s[255];
     cin>> s ;

      cout<< '\n' << "Bin code:\n";
      int i,c,power;

     for( i=0 ; s[i]!='\0' ; i++ )
     {
          c = s[i];

          for( power=7 ; power+1 ; power-- )
          if( c >= (1<<power) )
          {
              c -= (1<<power);
              cout << "1";
          }
          else
          cout << "0";
          cout << '\n';
   }
     cin.get();
     cin.get();
     return 0;
}
