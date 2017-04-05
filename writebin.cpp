#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';

   ofstream myfile{"abc.bin", ios::binary};
   if (myfile) //check if file opened succesfully
   {
   	myfile.write(reinterpret_cast<char*>(&a), sizeof(a));
	myfile.write(reinterpret_cast<char*>(&b), sizeof(b));
	myfile.write(reinterpret_cast<char*>(&c), sizeof(c));
   }
   else
	cout << "Error opening data.bin" << endl;
 
   return 0;
}
