//problem:https://www.codingninjas.com/studio/problems/find-unique_625159?leftPanelTab=0
#include <iostream>

using namespace std;



int findUnique(int *arr, int size)
{
    //Write your code herea`
    int ans = 0;

    for(int i = 0; i<size; i++) {
      ans = ans^arr[i];
    }
    return ans;
}
