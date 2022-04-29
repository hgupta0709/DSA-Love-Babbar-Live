#include<iostream>
using namespace std;

int swapArr(int arr[], int n){
    for(int i=0; i<n; i = i+2){             //i+2 esliye because alternate bola hai naaa yeh nahi kiya toh use agle element se hi start ho jaega jo swapped hai
        if(i+1<n){                          //Agar i+1 pure array se chota hai ie n, mtlb toh swap hoga joki ho raha hai
            swap(arr[i], arr[i+1]);
        }
    }
}

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
    swapArr(arr, n);
    printArray(arr, n);
}