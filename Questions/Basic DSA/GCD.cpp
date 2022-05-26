/*
    gcd(8, 12)
    8 = 2, 2, 2, 1
    12 = 2, 2, 3, 1
    GCD/HCF = 2 * 2 = 4 ans
    Euclid Algorithm
    GCD(A,B) = GCD(A-B, B)
    GCD(12-8, 8) => GCD(4, 8) => GCD(8, 4)
    GCD(8-4, 4) => GCD(4, 4) => GCD(4, 4)
    GCD(4-4, 4) => GCD(0, 4) = 4 IS THE ANSWER

*/

#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(a == 0) return b;
    if(b == 0) return a;
    while(a!=b){
        if(a>b) 
            a = a-b;
        else
            b = b-a;
    }
    return a;
}

int main(){
    int a, b;
    cin>>a>>b;
    cout<<gcd(a, b)<<endl;
    return 0;
    
}