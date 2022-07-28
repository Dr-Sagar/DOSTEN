#include<iostream>
using namespace std;
class A{
	public:
	int B;
	int num;
	int xy(){
	cout<<"'Entry any number"<<endl;
	cin>>num;
	if(num%2==0)	
	{
		cout<<"'Even num'"<<endl;
	}
	else
	
	
	{
		cout<<"'Odd num"<<endl;
		}	
	}
};
int main(){
	A o;
	cin>>o.num;
	o.xy();
	return 0;
}