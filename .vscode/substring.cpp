#include <iostream>
#include <string.h>

using namespace std;
int main() {
   string str1 = "Data Structure plays an important role in Coding";
   string str2 = str1.substr(4, 10);
   string str3 = str1.substr(0, 4);

   cout << "Substring starting at position 4 and length 10 is: " << str2 <<endl;
   cout << "Substring starting at position 0 and length 4 is: " << str3;
   return 0;
}

