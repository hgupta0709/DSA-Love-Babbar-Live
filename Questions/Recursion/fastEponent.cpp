/*
    if odd 2^11 = 2^5 * 2^5 * 2; this app. is o(log N)            :  2^11 = 2*2*2*2*2*2*2*2*2*2 this will take o(n); that app. is better
    if even 2^10 = 2^5 * 2^5;

    B.Case  2^0 = 1;
    if(n==0) reuturn 1

    "n&1" ealiye use hota hai because kisi bhi odd number ka binary end mae 1 hi hota hai and yeh bht fast hota hai

*/
#include<iostream>
using namespace std;

int fastexponent(int n){
    if(n==0){
        return 1;
    }
    int smallerproblem = fastexponent(n/2);
    if(n&1){ //if n is odd
        return smallerproblem * smallerproblem * 2;
    }
    else{
        return smallerproblem * smallerproblem;
    }
}

int main(){

    cout<< "ans is: "<<fastexponent(10)<<endl;
    
    return 0;

}
/*
    exp(10) sp*sp ie 32*32 1024(2^10 = 1024)
    exp(5) it is odd sp*sp*2 = 4*4*2 = 32
    exp(2) it is odd sp n*n ie 2*2 = 4
    exp(1)  1*1*2 = 2 return 
    exp(0) 1 return
*/
