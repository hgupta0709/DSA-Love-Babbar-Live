#include<iostream>
using namespace std;

bool isPresent(int arr[3][4], int target, int i, int j){
    for(int i = 0; i< 3; i++){
        for(int j = 0; j < 4; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[3][4];

    //input
    for(int i = 0; i < 3 ; i++){
        for(int j = 0; j < 4; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the target you want to search: "<<endl;
    int target;
    cin>>target;

    if(isPresent(arr, target, 3, 4)){
        cout<<"target found "<<endl;
    }
    else{
        cout<<"target not found "<<endl;
    }



    //print
    for(int i = 0; i < 3 ; i++){
        for(int j = 0; j < 4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}