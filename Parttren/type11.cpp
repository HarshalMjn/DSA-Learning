// A A A
// B B B
// C C C

#include <iostream> 
using namespace std; 

int main () {
    int n;
    int row = 1;
    while(row<=n){
        col=1;
        while(col<=0){
            char cha= 'A'+row-1;
            cout<<cha<<'';
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0
}