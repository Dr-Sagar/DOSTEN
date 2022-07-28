#include<iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }
    return (fib (n-2) + fib (n-1));
}


// FIBONACHI BY RECURSION

int main(){

    int a;
    cin>>a;
    cout<<fib(a);
    
    return 0;
}