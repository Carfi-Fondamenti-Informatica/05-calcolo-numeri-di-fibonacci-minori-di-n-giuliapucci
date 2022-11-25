#include <iostream>
using namespace std;

int main() {
int a=1;
int b=0;
int c=0;
int n=0;
int i;
cin >> n;
 if (n>2) {
     cout << a << endl;
     for (i=0;i <= n;i++) {
         c=a+b;
         b=a;
         a=c;
         if (c<=n) {
             cout << c << endl;
         }
     }
 } else if (n==1) {
     cout << a << endl;
 } else if (n==2) {
     cout << "1" << endl;
     cout << "1" << endl;
 }
   return 0;
}
