#include<iostream>
using namespace std;


// A CLASS WITH PUBLIC SPECIFIER



class animal{
    public:
    int age;
    string type;
};


int main(){

animal kukur;
kukur.age=11;
kukur.type= "Labrador";


cout<<"The age of the kukur is :"<<kukur.age<<endl;
cout<<"The type of the kukur is :"<<kukur.type<<endl;
    
    
    
    
    
    return 0;
}