/*
                                                                                    T.C = log(logn)
                                                                                    S.C = O(n)
    n=30
    1. mark every number as prime number till 30

    2. mark 0 & 1 as not prime 

    3. table wise non prime mark kardo for ex 2 ki table mae jojo hai usse non prime marke kardo ie - 4,6,8,10,12,14,16,18,20,22,24,26,28,30 ("2 kyun nahi because humne bola ki 2 tu toh hai prime but jo tere table mae hai voh nahi hai")
    next 3 par so same thing 3 is prime but aur jo bhi 3 ke table mae hai voh non prime ho jaega ha
    4 ko ignore.
    5 ke saath phirse start karenge 5 hoga uske table mae jojo hai voh nahi hoga

*/
/*
    vector<bool> prime(n+1, true)
    ka mtlab yeh hota hai. mark
    agar mae N, true likhta mtlb 0->29 ke array mae true ho jata
    n+1, true mae 0->30 ke array mae True ho jaega 
*/

#include<iostream>
#include<vector>
using namespace std;

int soe(int n){
    int count = 0;
    //condition 1 sare no. ko prime number manlo
    vector<bool> prime(n+1, true);
        //condition 2. 0 and 1 mark as non prime
        prime[0] = prime[1] = false;
        //condition 3. table wise non  prime mark kardo
        for(int i = 2; i < n; i++){
            if(prime[i])//agar hamara i ek prime number hai toh increament karwa dena
                count++;
            //table wise marking
            for(int j = 2*i;j<n;j+i){  //2*i mtlb table and j+i mtlb 3*i ke liye toh +1 karna padega naa        for ex(2*2 = 4 then j=j+i->4+2 = 6)
                prime[j] = 0;    //jitne bhi nuber eske under aate aa rahe hai unka false mark kar dena
            }
        }
        return count;
}

int main(){
    int n = 30;
    cout<<"count is: "<<soe(n)<<endl;
    return 0;
}