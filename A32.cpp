# include <iostream>
using namespace std;


int sum(int n);
int main()
{

  









int sum(int n){
   int i, isPrime = 1;
   for(i = 2; i <= n/2; ++i){
      if(n % i == 0){
         isPrime = 0;
         break;
      }
   }
   return isPrime;
}
    return 0;
}