//For cTech use only
//This is software is downloadable to the public but can not
//be copied sold or edited. Is not transerable.
#include <iostream>
using namespace std;

int main ()
{

   int variable = 4;
   double b;          //later determind by sistem user
   
   cout << "How smart am I? Well lets test, type the number shown. \n";
   cout << "The number is" << variable << "okay now type that and press enter. \n";
   cin >> b;
   cout << "You typed" << b << "I'm preparing to determine if that is what I said...\n";
   
   if (variable == b) {
   cout << "you are smart you typed in what you are supposed to.\n";
}
  else (variable < || > b) {
  cout << "Haha you thought you could trick me? Well you didnt type in what you are supposed to!\n" endl;
}
  return 0;
} 
