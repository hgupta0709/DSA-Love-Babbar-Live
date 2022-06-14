#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j){
    if(i>j){ return true;}
    if(str[i] != str[j]){ return false; }
    else{
        return checkPalindrome(str, i+1, j-1);
    }
}


int main(){
    string name = "paabaap";
    cout<<endl;

    bool ispalindrome = checkPalindrome(name, 0, name.length()-1);
    if(ispalindrome){
        cout<<"it's a palindrome"<<endl;

    }
    else{
        cout<<"it's not a palindrome"<<endl;

    }
    return 0;
}