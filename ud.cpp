#include<iostream>
using namespace std;
class B;
class A
{
	public:
	int f(B& );
};
class B
{
	private:
	 int b,c,g;
	public:
	B()
	 {
	 b = 0;
	 c = 1;
	 g = 9;
	 }
	 friend int A :: f(B& x);
	 };
	int A :: f(B& x) 
	{   int m = x.b+ x.c+x.g;
		cout<<x.b;
		return x.b;
	}
int main()
{
	A a;
	B b;
	a.f(b);
	return 0;
	}