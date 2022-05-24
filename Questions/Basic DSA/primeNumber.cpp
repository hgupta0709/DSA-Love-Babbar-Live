/*
prime number -  the number that divide by itself or by 1 is PM. for ex 2, 3, 7, 11.
    in PM we will divide the given number from 2 to N-1 OR *sqrt(n)* if remainder comes zero then its not a prime, else is a prime number
*/
#include<iostream>
#include<cmath>
using namespace std;


int main(){
    cout<<"enter a number to check if it's a prime or not"<<endl;
    int n;
    cin>>n;
    bool flag = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            cout<<"Not a prime"<<endl;
            flag = 1;
            break;
        }

    }
    if(flag == 0){
        cout<<"The numner is a prime"<<endl;
        
    }
}
