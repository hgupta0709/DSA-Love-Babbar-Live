#include<iostream>
using namespace std;

bool ls(int *arr, int size, int key){
    if(size == 0){ 
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    else{
        int remainingpart = ls(arr+1, size - 1, key);
        return remainingpart;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = 8;
    int key = 12;

    bool ans = ls(arr,size,key);
    if(ans){
        cout<<"present";
    }
    else{
        cout<<"not found";
    }
}