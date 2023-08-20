//A 
//B B
//C C C

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=1){
        int j=1;
        char cha = 'A'+row-1;
        while(j<=n){
            cout<<cha;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}