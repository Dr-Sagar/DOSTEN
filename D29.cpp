# include <iostream>
// # include "C29.cpp"
using namespace std;

int main()
{
    
    int c=0,i,d,a;

    cout<<"Enter the randomnumber\n";
    cin>>a;

for (i = 0; i <= a; i++)
    {
        if (a% i==0)
        {
            c++;
        }
if (c==2)
{
cout<<a;
}

}}