# include <iostream>
using namespace std;


int jem(int n)
{
    int c=0,i,d;

    // cout<<"Enter any n\n";
    // cin>>n;

    for (i = 0; i <= n; i++)
    {
        if (n% i==0)
        {
            c++;
        }
        if (c==2)
        {
            d=n;
        }
    }
    
 
}