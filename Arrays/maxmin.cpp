#include <iostream>

using namespace std;


int getMin(int num[],int n) {
    int min = INT_FAST32_MIN;
    
    for(int i = 0; i<n; i++){
        if(num[i] > min ){
            min = min[i];
        }
    }
    
    //return max value
    return min;
} 


int getMax(int num[],int n) {
    int max = INT_FAST32_MAX;
    
    for(int i = 0; i<n; i++){
        if(num[i] > max ){
            max = max[i];
        }
    }
    
    //return max value
    return max;
} 

int main()
{
    int size;
    cin>>size;
    //size of array -> variable (bad pratice)
    //good pratice [22],[100] good as compair to  variable
    
    int num[100];
    
    //taking input of array
    for(int i=0;i<size;i++) {
       // input of array
        cin>>num[i];
    }
    cout<<"Max value is"<<getMax(num,size)<<endl;
    cout<<"Min value is"<<getMin(num,size)<<endl;
    
    

    return 0;
}