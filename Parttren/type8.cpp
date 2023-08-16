// Q) 1
//    2 3 
//    4 5 6
//    7 8 9 10 

#include <iostream> 
using namespace std; 

int main() {
    int n;
    cin>>n;
    int i;
    while(i<=n){
        int j = 1,incrp = 1;
        while(j<=i){
            cout<<incrp<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}