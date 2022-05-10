#include<iostream>
using namespace std;

int bs(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}


int main(){
    int arr[100] = {1,2,3,4,5,6,7,8};

    int key;
    cin>>key;

    cout<<bs(arr, 8, key);

    return 0;
}