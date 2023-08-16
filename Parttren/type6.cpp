// Q) *
//    * *
//    * * *
//    * * * *
#include <iostream> 
using namespace std;

int main() {
    cin>>n;
    int i = 1;
    while(i<=n) {
        int j ;
        while(j<=i){
            cout<<"*"<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}