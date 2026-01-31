#include<iostream>
using namespace std;
void quickSort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int pivot=arr[end];
    int partitionIndex=start;
    for(int i=start;i<end;i++){
        if(arr[i]<=pivot){
            swap(arr[i],arr[partitionIndex]);
            partitionIndex++;
        }
    }
    swap(arr[partitionIndex],arr[end]);

    quickSort(arr,start,partitionIndex-1);
    quickSort(arr,partitionIndex+1,end);
}
int main(){
    int arr[]={5,4,3,2,1};
    int size=5;
    quickSort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
