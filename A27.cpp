#include<iostream>
using namespace std;


class student
{
    protected:
    char roll [10];
    char branch [20];

    public:
     void read_student()
    {
        cout<<"Enter Roll and Branch"<<endl;
        cin>>roll>>branch;

    }

    display_student()
    {
        cout<<"Roll no. ="<<roll<<endl;
        cout<<"Branch ="<<branch<<endl;
    }
};