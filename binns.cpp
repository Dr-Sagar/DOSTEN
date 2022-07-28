#include<iostream>
using namespace std;
bser(int a[],int x,int s,int e)
{
	while(s <= e)
	{
			int mid = s + (e - s)/2;
			if(a[mid] == x)
			return mid;
			if(a[mid] < x)
		    	s  = mid + 1;
		    else
		    e = mid - 1;
			}
		return 1;
	
}
int main(){
	int a[10],n,x;
	cout<<"no of elements";
	cin>>n;
		cout<<"elements"<<endl;
	for(int i = 0;i<n;i++)cin>>a[i];
		cout<<"saerch elements";
	cin>>x;
	int r = bser(a,x,0,n-1);
	if(r == 1)
	cout<<"not found";
	else cout<<"found";
	return 0;
	
	}