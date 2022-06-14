#include<iostream>
using namespace std;

bool isSorted(int *arr,int size){
    if(size==0 || size==1)
        return true;
    if(arr[0]>arr[1]){
        return false;
    }
    else{
    bool sort = isSorted(arr + 1, size - 1);
    return sort;
    }
}


int main(){
    int arr[] = {1,2,5,4,3,6,7,8};
    int size = 8;

    bool ans = isSorted(arr, size);
    if(ans){
        cout<<"sorted";
    }
    else{
        cout<<"unsorted";
    }
    return 0;
}