#include<iostream>
using namespace std;
 int findsum(int arr[],int size){
    if(size==0){
        return 0;
    }
    return arr[0]+findsum(arr+1,size-1);
 }
 int main(){
    int arr[]={2,3,4,5,9,6,2,4};
    int size=8;
    cout<<findsum(arr,size);
    return 0;
    }