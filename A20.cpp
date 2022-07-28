#include<iostream>
using namespace std;

class jam{
    public:
    int mynum;
    string mystring;
};


int main(){
jam myobj;

myobj.mynum = 15;
myobj.mystring = "This is the text of Hello World !";
    
    
    cout<<myobj.mynum<<endl;
    cout<<myobj.mystring<<endl;
    
    
    return 0;
}