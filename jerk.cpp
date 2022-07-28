#include<iostream>
using namespace std;
int merge(int a[],int p,int q, int r){
	int n1 = q-p+1;
	int n2= r-q;
	int n[n1],m[n2];
	for(int i = 0;i<n1;i++)
	n[i] = a[p+i];
	 cout<< "m\n";
	for(int j = 0;j<n1;j++)
	m[j] = a[q+1+j];
		 cout<< "m\n";
	int i = 0,j = 0,t = p;
	while(i<n1 && j<n2){
			 cout<< "m\n";
		if(n[i]<=m[j]){
			a[t] = n[i];
			i++;
			}
		else{
		
		  	a[t] = m[j];
		  	j++;
		}
		t++;
	}
	while(i<n1){
			 cout<< "m\n";
			a[t] = n[i];
			i++;
			t++;
			}
			
	while(j<n2){
			 cout<< "m\n";
		  	a[t] = m[j];
		  	j++;
		  	t++;
		}
		
	}
int m_sort(int a[],int l,int r){
	if(l<r)
	{
			 cout<< "m\n";
		int m = l+(r-l)/2;
		m_sort(a,l,m);
		m_sort(a,m+1,r);
		merge(a,l,m,r);
	}
	}
int main(){
	int a[10],n,x;
		 cout<< "m\n";
	cout<<"no of elements";
	cin>>n;
		cout<<" elements";
	for(int i = 0;i<n;i++)cin>>a[i];
	m_sort(a,0,n-1);
	for(int i = 0;i<n;i++)cout<<a[i];

	return 0;
	
	}
