
//    1 
//    2 3
//    3 4 5
//    4 5 6 7

#include <iostream> 
using namespace std; 

int main() {
    int n;
    cin>>n;
    int i;
    while(i<=n) {
        int j = 1, val=i;
        while(j<=n){
            cout<<val<<'';
            j++;
        }
        cout<<endl;
        i++
    }
    return 0;
}