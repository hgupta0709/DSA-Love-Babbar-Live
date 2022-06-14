int a = 21;

int &b = a
//so b bhi uska referance ban jata hai hum a ko b se bhi acess kar sakte hai
fun(int& j){
    //yeh j a ko hi point kar raha hai
}

-> int a = 5
fun(a);
-> Q. Why do we need reference variables if we have pointers.
In Pointers to access the value of the actual variable, we need to explicitly dereference the pointer variable by using ‘value at address’ dereferencing operator(*).
In References to access the value of the actual variable, we do not need to explicitly dereference the reference variable, they get de-referenced automatically.
Definitions:-
    Pointers: A pointer is a variable that holds memory address of another variable. A pointer needs to be de referenced with * operator to access the memory location it points to.
References: A Reference can be called as a constant pointer that becomes de referenced implicitly. When we access the reference it means we are accessing the storage.

int* ptr = new int;
