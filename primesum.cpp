#include <iostream>
using namespace std;
int func(int num) {
   int i;
   int x = 1;
   for(i = 2; i <= num/2; ++i) {
      if(num % i == 0) {
         x = 0;
         break;
      }
   }
   return x;
}
int main() {
   int num , i;
   cout << "Enter a number : \n";
   cin >> num;
   for(i = 2; i <= num/2; ++i) {
      if (func(i)) {
         if (func(num - i)) {
            cout << num << " = " << i << " + " << num-i << endl;
         }
      }
   }
   return 0;
}
