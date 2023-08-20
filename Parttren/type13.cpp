// A B c
// D E F
// G H I

#include <iostream>
using namespace std;

int main() {

   int n;
   cin>>n;
   int i=1;
   while(i<=n){
    int j=1,
    char start = 'A';
    while(j<=n){
        cout<<start<<' ';
        j++;
        start++;
    }
    cout<<endl;
    i++;
   }
   return 0;
}
