#include<iostream>
using namespace std;
lin(int a[],int n, int x)
{
		if(n<0)
			return -1;
		else if(a[x]==n)
		return 1;
		else
		return lin(a,n-1,x);
	
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
	if(r == 1)
	cout<<"found";
	else cout<<"not";
	return 0;
	
	}
