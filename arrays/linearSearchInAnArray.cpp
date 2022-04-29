#include<iostream>
using namespace std;


bool linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[100];

    cout<<"Enter the sizxe of the array";
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;

    bool found = linearSearch(arr, n, key);    //remember to write bool here

    if(found){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}