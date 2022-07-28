#include<iostream>
using namespace std;

class    ano  { 
Private:
    int a,int b, int c;
    
public:
     int f();
    
    
};

ano::f(){
    cout <<a<<endl;
    cout <<b<<endl;
    cout <<c<<endl;
}

int main(){

    ano def;
    def.a=3;
    def.b=33;
    def.c=333;
    
    f();
    
    return 0;
}