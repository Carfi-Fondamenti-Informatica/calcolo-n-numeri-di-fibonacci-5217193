#include <iostream>
using namespace std;

int main() {
   int i, n, a=1, b=1, c=0;
   
   cin>>n;
   
   if (n>1) {
      cout<<a<<endl;
      cout<<b<<endl;
   } else {
      cout<<"error"<<endl;
   }
   for(i=1;i<n;i++) {
      c=a+b;
      b=c
         cout<<c<endl;
   }
   return 0;
}
