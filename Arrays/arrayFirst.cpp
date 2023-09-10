
#include <iostream>
using namespace std;

void printArray(int arr[],int size){
    cout<<"print array"<<endl;
    //print array]
    for(int i = 0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
     cout<<"print array done"<<endl;
    
         
}

int main() {
    
   //declare
   int num[15];
   
   //accessing the array
   cout<<num[14]<<endl;//garbage value 
   cout<<num[20]<<endl; //first create at least 21 size 
   //index 0 => to n-1 
   
   //initialising an array
   int  Second[3] = {5,7,11};
   cout<<"Everything is fine"<<endl;
   cout<<Second[2]<<endl;
   
   int third[15] = {2,7};
   printArray(third,15);
   int thirdSize = sizeof(third)/sizeof(int);
   cout<<thirdSize;
   // cout<<"Everything is fine"<<endl;
   // int n=15;
   // cout<<"print array"<<endl;
    //print array
   // for(int i = 0;i<n;i++) {
        //cout<<third[i]<<" ";
   // }
   // cout<<endl;
    //Note-we put only 2 and 7 and the rest comes 0 
    //so if we try to initl
    //the array n the size of array is really big and we entred few elememnt so the rest will be 0
    
    //initialize all location with 0
    int fourth[10] = {0};
     printArray(fourth,15);
    
    //int p=10;
    //cout<<"print array"<<endl;
    //print array
    //for(int i = 0;i<p;i++) {
       // cout<<fourth[i]<<" ";
   // }
   // cout<<endl;
    
     //initialize all location with 1 not possible
    int fifth[10] = {1};
    printArray(fifth,15);
    int fifthSize = sizeof(fifth)/sizeof(int);
    cout<<fifthSize<<endl;
   // int v=10;
    //cout<<"print array"<<endl;
    //print array
   // for(int i = 0;i<v;i++) {
       // cout<<fifth[i]<<" ";
   // }
   // cout<<endl;


    char ch[5] = {'a','b','c','r','p'};
   //cout<<ch[3];
   int q=5;
   for(int i=0;i<q;i++){
       cout<<ch[i]<<endl;
   }

   
   
    
    
    

    return 0;
}