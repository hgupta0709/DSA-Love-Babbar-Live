#include<iostream>
using namespace std;
bool present(int arr[], int n, int key){
    if(arr[i][j] == key)
}

int main(){
    int arr[3][3];
    int n = 3;
    int key = 13;
    //input
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }

    present(arr, n, key);

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}