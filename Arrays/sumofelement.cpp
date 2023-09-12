#include <iostream>

using namespace std;

int main()
{
    int add[5] = {2,7,1,4,3};
    int sum;

    for(int i = 0 ; i<5; i++){
        
       sum = sum+add[i];
       
    }
    cout<<sum;

    return 0;
}