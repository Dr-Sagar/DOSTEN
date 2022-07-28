#include<iostream>
using namespace std;

class df{
    private:
    int r,t;

    public:
    int fg(){
        cout<<"Enter the Round Cross\n";
        cin>>r;
        cout<<"The Cross numbedr is " <<r<<endl;
    }
};

int main(){

    int k;

    cout<<"Enter the Number\n";
    cin>>k;
    cout<<"The number is\t"<<k<<endl;


    df l;
    l.fg();

    return 0;
}


// The session was entered i