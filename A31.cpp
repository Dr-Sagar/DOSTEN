#include <iostream>
using namespace std;



int sum(int n);
int main(){
   int num, i;
   cout<<"Enter number: ";
   cin>>"%d", &num;
   int flag = 0;
   for(i = 2; i <= num/2; ++i){
      if (sum(i) == 1){
         if (sum(num-i) == 1){
            cout<<"\nThe given"<<num<<"can be expressed as the sum of"<<i<<" and"<<num -i<<"\n\n";
            flag = 1;
         }
      }
   }
   if (flag == 0)
   cout<<"The given"<<num<< "cannot be expressed as the sum of two prime numbers\n";
   return 0;
}
// //check if a number is prime or not
// int sum(int n){
//    int i, isPrime = 1;
//    for(i = 2; i <= n/2; ++i){
//       if(n % i == 0){
//          isPrime = 0;
//          break;
//       }
//    }
//    return isPrime;
}