#include <iostream>
using namespace std;

int main() {
int a=1;
int b=0;
int c=0;
int n=0;
cin >> n;
 if (n>0) {
     cout << a << endl;
     while (c<n) {
         c=a+b;
         b=a;
         a=c;
         if (c<=n) {
             cout << c << endl;
         }
     }
 }
   return 0;
}
