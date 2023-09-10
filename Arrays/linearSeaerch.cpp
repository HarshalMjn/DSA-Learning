#include <iostream>

using namespace std;

bool serach(int arr[], int size,int key) {
    for(int i = 0 ; i<size; i++) {
        if( arr[i] == key) {
            return 1; //find return on the spot
        }
    }
    return 0; //not find after the arry traverse
}

int main()
{
    int arr[10] = {5,7,-2,10,22,-2,5,22,1};
    
    //whether is present in it or not ?
    cout<<"Enter the element to serach for"<<endl;
    
    int key;
    cin>>key;
    
    bool found  = serach(arr,10,key);  //function give bool value so store in bool variable
    
    if( found) {
        cout<<"key is  present"<<endl;
        
    }
    else {
        cout<<"key is absent"<<endl;
    }
    
    return 0;
}