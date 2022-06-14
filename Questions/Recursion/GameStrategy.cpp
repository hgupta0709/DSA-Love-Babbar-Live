#include<iostream>
using namespace std;

int os(int arr[], int i, int j){
    if(i>j){ return 0;}
    int choice1 = arr[i] + min(os(arr, i+2, j), os(arr, i+1,j-1) );
    int choice2 = arr[i] + min(os(arr, i+1, j-1), os(arr, i, j-2)) ;
    int ans = max(choice1, choice2);
    return ans;
}


int main(){
    int arr[] = {20, 30, 2, 2, 2, 10};
    int i = 0;
    int j = 5;
    cout<<os(arr, i, j)<<endl;
    return 0;
    

}