#include<iostream>
using namespace std;
int partition(int arr[],int start,int end){
    int pivot=arr[start];
    //counting how many elements are less than pivot
    int count=0;              
    for(int i=start+1;i<=end;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    //after counting, we got to know about the right place of pivot
    int pivotIndex=start+count;
    swap(arr[pivotIndex],arr[start]);
    //now we will  handle the right and left part in which all the elements should be less than or greater respectively
    int i=start,j=end;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }  swap(arr[i++],arr[j--]);


        }
        return pivotIndex;}
void quickSort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int p=partition(arr,start,end);
    quickSort(arr,start,p-1);
    quickSort(arr,p+1,end);
}
int main(){
    int arr[]={5,4,3,2,1};
    quickSort(arr,0,4);
    for(int i:arr){
        cout<<i <<" ";
    }
    return 0;
}
