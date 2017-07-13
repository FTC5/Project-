
#include <conio.h>
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
     char s[255];
     ifstream in("ccpstudi.txt");
     if(!in){
            return 1;
     }
     in>>s;
      int i,c,power;
      ofstream out("ccpstudi.txt");

     for( i=0 ; s[i]!='\0' ; i++ )
     {
          c = s[i];
          for( power=7 ; power+1 ; power-- )
          {
              c -= (1<<power);
              out << 1;
          }
          else
          out << 0;
          out << "|";
   }
        in.getline(s, 255);
        in.close();
         for( i=0 ; s[i]!='\0' ; i++ )
     {
          c = s[i];
        for( power=7 ; power+1 ; power-- )
          if( c >= (1<<power) )
          {
              c -= (1<<power);
              out << 1;
          }
          else
          out << 0;
          out << "||";
   }

     cin.get();
     cin.get();
     out.close();
     return 0;
}
