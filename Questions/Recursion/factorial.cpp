/*
        Base case
        if n==0, or n==1 return 1 because 0! is 1 so 1! = 1 * 0! = 1
*/
#include<iostream>
using namespace std;

int factorial(int n){
    if(n==1){ return 1;}
    return n * factorial(n-1);
}

int main(){
    int n;
    cin>>n;

    cout<<"factorial is: "<<factorial(n)<<endl;
    return 0;
}