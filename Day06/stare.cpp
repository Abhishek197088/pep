//problem statement : given a staircase of n steps, you can climb either 1 step or 2 steps at a  given time.
// the task is to return the count of distinct ways to reach the top . the order of steps matters.
// example: input n =3 , output 3, 



#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    return isSorted(arr+1,size-1);
    }
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    cout<<isSorted(arr,size);
    return 0;   
}
