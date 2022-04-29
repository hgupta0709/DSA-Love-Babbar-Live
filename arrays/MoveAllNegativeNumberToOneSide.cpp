#include<iostream>
using namespace std;


int moveNegative(int arr[], int n){
    int i = -1;
    int pivot = 0;
    for(int j = 0; j < n; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
}

 void printArray(int arr[], int n){
        for(int i=0; i<n;i++){
            cout<<arr[i]<<" ";          //if you have not written the print function then it will not print
        }
        cout<<endl;
 }

int main(){

    int arr[100];
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    moveNegative(arr, n);
    printArray(arr, n);
}