#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   ofstream myfile;
   myfile.open ("abc.txt");

   short int a = -6730;
   float b = 68.123; 
   char c = 'J';

   myfile<<a<<" "<<b<<" "<<c;
   myfile.close(); 
 
   return 0;
}
