#include<iostream>
using namespace std;

int sum(int *arr, int size){
    if(size == 0){ return 0;}
    if(size == 1){ return arr[0];}

    int remaining = sum(arr+1, size-1);
    int sum = arr[0] + remaining;
    return sum;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = 7;

    int getsum = sum(arr, size);
    cout<<getsum<<endl;

    return 0;
}