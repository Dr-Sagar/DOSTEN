#include<iostream>
using namespace std;

class student
{
	char roll [20];
	char name [20];
	
	public:
		void input(void)
		{
			cout<<"Enter the  name"<<endl;
			cin>>name;
			cout<<" Enter roll no."<<endl;
			cin>>roll;
		}
		
		show(void){
			cout<<"Name = "<<name<<endl;
			cout<<"Roll = "<<roll<<endl;
		}
};


class subject
{
	char s_code[20];
	char s_name[20];
	
	public:
		void entry(void){
			cout<<"Enter the subject name"<<endl;
			cin>>s_name;
			cout<<"Enter the subject code"<<endl;
			cin>>s_code;
		}
		
		
		show()
		{
			cout<<"The subject is "<<s_name<<endl;
			cout<<"The subject code is "<<s_code<<endl;
		}
};




class record:public student,subject
{
	public:
		
		entrx(){
			student::input();
			subject::entry();
			
		}
		display(){
			student::show();
			subject::show();
		}
};



int main(){
	
	record f;
	f.entrx();
	f.display();
	return 0;
	
}
