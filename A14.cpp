#include<iostream>
using namespace std;


int factorial(int n){
    if(n<=1){
        return 1;
    }
    // else
    return (n*(factorial(n-1)));
}

// FACTORIAL BY RECURSION   

int main(){

    int q;

    cout<<"enter the value:"<<endl;
    cin>>q;
    cout<<"The factorial is "<<factorial(q)<<endl;

    return 0;
}