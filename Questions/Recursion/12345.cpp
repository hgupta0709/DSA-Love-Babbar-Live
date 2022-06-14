#include<iostream>
using namespace std;

void print(int n){
    if(n<1){
        return;
    }
    cout<<n<<endl;
    print(n-1);
}

void print12345(int n){
    if(n<1){ return;}
    print12345(n-1);
    cout<<n;
}


int main(){
    print12345(5);
    cout<<endl;
    return 0;
}
//outpu : 5, 4, 3, 2, 1

