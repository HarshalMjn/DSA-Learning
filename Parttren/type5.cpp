// Q) 1 2 3
//    4 5 6
//    7 8 9 print
#include <iostream> 
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1,incre = 1;
        while(j<=n){
            cout<<incre<<" ";
            incre++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}