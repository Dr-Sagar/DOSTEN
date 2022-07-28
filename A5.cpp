

# include <iostream>
# include <cmath>

using namespace std;

int main(){
    int a;
    int b;
    int c;


    cin>> a ;
    cin>> b ;
    cin>> c ;

    int d =(b*b)-4*a*c;
        if (d>=0)
        {
            int r=sqrt(-b+d)/2*a;
            int s=sqrt(-b-d)/2*a;
            cout<<r<<"\t"<<s;
        }
        else
        {
            cout<<"Roots are imaginary"<<endl;
        }   
    return 0;
}