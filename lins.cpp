#include<iostream>
using namespace std;
lin(int a[],int n, int x)
{
	for(int i = 0;i<n;i++){
		if(a[i]==x)
		return 1;
	
	}
}
int main(){
	int a[10],n,x;
	cout<<"no of elements";
	cin>>n;
		cout<<" elements";
	for(int i = 0;i<n;i++)cin>>a[i];
		cout<<"saerch elements";
	cin>>x;
	int r = lin(a,n,x);
	if(r == -1)
	cout<<"not found";
	else cout<<"found";
	return 0;
	
	}
