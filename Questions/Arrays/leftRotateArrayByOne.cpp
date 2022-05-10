#include<iostream>
using namespace std;

int rotateArrByOne(int arr[], int n){
    int temp = arr[0];
    for(int i = 1; i < n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}
rhstrhsrth

void printArray(int arr[], int n){
        for(int i=0; i<n;i++){
            cout<<arr[i]<<" ";          
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
    rotateArrByOne(arr, n);
    printArray(arr, n);
}