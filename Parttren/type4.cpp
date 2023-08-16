// Q) 3 2 1
//    3 2 1
//    3 2 1 print 
#include <iostream> 
using namespace std;

int main() {
    int n;
    cin>>n;
    int i = 1;
    while(i<=0){
        int j=0;
        while(j<=n) {
            cout<<n-j+1;<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}