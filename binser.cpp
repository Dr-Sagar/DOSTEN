 #include<iostream>
using namespace std;
bser(int a[],int s,int e, int x)
{
		if(e>=s){
			int mid = s + (e - s)/2;
			if(a[mid] == x)
			return mid;
			if(a[mid] > x)
		    	return bser(a,s,mid-1,x);
			return bser(a,mid+1,e,x);
			}
		return 1;
	
}
int main(){
	int a[10],n,x;
	cout<<"no of elements";
	cin>>n;
		cout<<" elements";
	for(int i = 0;i<n;i++)cin>>a[i];
		cout<<"saerch elements";
	cin>>x;
	int r = bser(a,0,n-1,x);
	if(r == 1)
	cout<<"found";
	else cout<<"not";
	return 0;
	
	}