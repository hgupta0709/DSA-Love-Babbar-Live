#include<iostream>
using namespace std;

int rowSum(arr[3][4],int i, int j){
    cout<<"printing arr "<<endl;
    for(int i = 0; i < 3; i++){
        int sum = 0;
        for(int j = 0; j < 4; j++){
            sum+ = arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[3][4];

    //input
    for(int i = 0; i < 3 ; i++){
        for(int j = 0; j < 4; j++){
            cin>>arr[i][j];
        }
    }
    
    

    //print
    for(int i = 0; i < 3 ; i++){
        for(int j = 0; j < 4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    rowSum(arr, 3, 4);
    return 0;
}