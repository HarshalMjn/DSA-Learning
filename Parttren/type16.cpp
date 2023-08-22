//A 
//B C
//D E F
//G H I G

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i =1;
    while(i<=n){
        int j = 1;
        char cha = 65;
        while(j<=i){
            cout<<cha;
            cha++
            j++;
        }
        cout<<endl
        i++;
    }
    return 0;

}
