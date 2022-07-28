#include<iostream>
using namespace std;
class A
{
	public:
	int a,b;00
	A(){
		a = 8; b =78;
	}
	friend class B; 
	};
	class B
	{
		public:
			B()
         {
	        cout<<"sffgfgh";
		 }		
		 f(A& x){
		 	x.a = 1; x. b =10;
		 	cout<<x.a<<x.b;
		 	
		 }
	};
	int main()
{
	A a;
	B b;
	b.f(a);
	return 0;
	}