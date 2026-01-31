#include<iostream>
using namespace std;
void Array2d(int arr[][100], int rows, int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<rows;i++){1
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[100][100];
    int rows,cols;
    cin>>rows>>cols;
    Array2d(arr,rows,cols);
    return 0;
}