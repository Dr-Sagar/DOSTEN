#include<iostream>
using namespace std;

int  swp(int* a;int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}



int main(){
int x = 4;
int y = 5; 

swp(&x,&y);

cout<<"The value is now  "<<x<<"y is now the value of  "<<y<<endl;
    
    
    
    
    
    return 0;
}