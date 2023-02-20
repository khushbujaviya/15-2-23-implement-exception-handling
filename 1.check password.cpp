#include<iostream>
using namespace std;
void printStrongNess(string& input) {
   int n = input.length();
   bool hasUpper = false;
      string normalChars = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 for (int i=0;i<n;i++) {
 	if (isupper(input[i]))
         hasUpper = true;
         size_t special = input.find_first_not_of(normalChars);
      
     }
         cout << "check a password is valid or not:-";
         if(hasUpper)
         cout<<"valid password";
         else
         cout<<"invalid password";
     }
     
     int main() {
   string input = "Khushbu@123";
   printStrongNess(input);

}
