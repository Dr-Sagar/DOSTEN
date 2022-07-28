//program given by soumyajit



#include<iostream>
#include<conio.h>
using namespace std;
    class Box
    {
        private:
        int l,b,h,v;

        public:
        void in()
        {
            cout<<"enter dimensions";
            cin>>l>>b>>h;
                v=l*b*h;
        }

        void out()
        {
            cout<<"the volume is "<<v;
        }
        
    };
        

        int main()
        {
            Box p;
            p.in();
            p.out();
            return 0;
        }
        

