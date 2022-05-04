// Memory  = c * i + j;
// arr[4][2]
// 4 is row and 2 is column 
// how to take input
#include<iostream>
using namespace std;

int main(){
    int arr[3][4];
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
