#include<iostream>
using namespace std;

  struct employee
    {
        int eID;
        float salary;
        char name;
    };
    
int main(){

struct employee ritesh;
ritesh.eID=908;
ritesh.salary=90000;
ritesh.name='R';

cout<<ritesh.eID<<endl;
cout<<ritesh.salary<<endl;
cout<<ritesh.name<<endl;
  
    

    return 0;
}