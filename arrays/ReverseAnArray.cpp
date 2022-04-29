#include<iostream>
using namespace std;

int reverseArray(int arr[], int n){
    int start = 0;
    int end = n-1;                      //if you aree starting from zero so the end will ne N-1 otherwise if start is 1 end will be N
    for(int i=0; i<n; i++){
        while(start<end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}

 void printArray(int arr[], int n){
        for(int i=0; i<n;i++){
            cout<<arr[i]<<" ";          //if you have not written the print function then it will not print the reversed array
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
    reverseArray(arr, n);
    printArray(arr, n);
}