// A B C
// A B C
// A B C

#include <iostream> 
using namespace std; 

int main() {
    int n;
    cin>>n;
    int i;
    while(i<=n){
        int j=0;
        while(j<=n){
            char cha = 'A'+j-1;
            cout<<cha<<'';
            j++

        }
        cout<<endl;
        i++;
       
    
    }
    return 0;
}