#include <iostream>
using namespace std;

int main(){
    int arr[] = {2, 4, 6, 8, 9, 11, 23};
    int n = 7;
    int target = 23;
    if(bs(arr, n, target)){
        cout<<"found"<<endl;
    }
}