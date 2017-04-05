#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';

   ofstream myfile{"abc.txt"};
   if (myfile) //check if file opened successfully
   	myfile<<a<<" "<<b<<" "<<c;
   else
	cout << "Error opening abc.txt" << endl;

   myfile.close(); 
 
   return 0;
}
