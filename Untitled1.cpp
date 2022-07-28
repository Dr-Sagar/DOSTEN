#include<iostream>
using namespace std;

int main(){
	int i,j,n,A[i],temp;
	cout<<"enter the value of array"<<endl;
	cin>>n;
	
	
	for(i=0;i<n;i++)
	{
		cin>>A[i];
		}
	for(i=1;i<n;i++)
	{
	  temp=A[i];
	  j=i-1;
	  while(j>=0 && A[j]>temp)	
	  {
	  	A[j+1]=A[j];
	  	j-- ;
	  	
	  }
		A[j+1]=temp;
		
	}
		for(i=0;i<n;i++)
	{
		cout<<A[i];
		
	}
	return 0;
	
	
	
}
