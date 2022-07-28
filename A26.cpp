#include<iostream>
using namespace std;

class   Student 
{ 
protected:
  char roll[20];
  char branch[20];

public:
  void Input(void);
  void Display(void);
       
    
};

 void Student :: Input()
{
    cout<<"Enter the roll number and branch of the student"<<endl;
    cin>> roll>>branch;
}

 void Student :: Display()
{
    cout<<"The Roll is "<<roll<<endl;
    cout<<"The branch is "<<branch<<endl;
}


// 

class internal_exam : public virtual Student
{
    protected:
    float im1,im2;

    public:
    void read(void);
    void show(void);


};


void internal_exam :: read()
{
    cout<<"Enter the internal marks of 1st subject"<<endl;
    cin>>im1;
    cout<<"Enter the internal marks of 2st subject"<<endl;
    cin>>im2;
}

void internal_exam :: show()
{
    cout<<"The internal marks of the subject 1 is  "<<im1<<endl;
    cout<<"The internal marks of the subject 2 is  "<<im2<<endl;
    cout<<"The internal total marks  is  "<<itotal();

itotal(){
    return im1+im2;
}

};

// 


class external_exam :  public virtual Student
{
    protected:
    float em1,em2;

    public:
    void read(void);
    void show(void);


};


void external_exam :: read()
{
    cout<<"Enter the external marks of 1st subject"<<endl;
    cin>>em1;
    cout<<"Enter the external marks of 2st subject"<<endl;
    cin>>em2;
}

void external_exam :: show()
{
    cout<<"The external marks of the subject 1 is  "<<em1<<endl;
    cout<<"The external marks of the subject 2 is  "<<em2<<endl;
    cout<<"The external total marks  is  "<<etotal();

etotal(){
    return em1+em2;
}

};

// 

class Result ; public internal_exam, public external_exam
{
    protected:
    float total;

    public:
    total_marks()
    {
        returns itotal+etotal;
    }
};









int main(){

    Result Ritesh;
    Ritesh.Input();
    Ritesh.internal_exam::read();
    Ritesh.enternal_exam::read();
    Ritesh.Display();
    Ritesh.internal_exam::show();
    Ritesh.enternal_exam::show();

    cout<<"The Total mark of this Student is "<<R.total_marks();
    

    
    
    return 0;
}