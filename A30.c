#include <stdio.h>
int sum(int n);
int main(){
   int num, i;
   printf("Enter number: ");
   scanf("%d", &num);
   int flag = 0;
   for(i = 2; i <= num/2; ++i){
      if (sum(i) == 1){
         if (sum(num-i) == 1){
            printf("\nThe given %d can be expressed as the sum of %d and %d\n\n", num, i, num - i);
            flag = 1;
         }
      }
   }
   if (flag == 0)
   printf("The given %d cannot be expressed as the sum of two prime numbers\n", num);
   return 0;
}
//check if a number is prime or not
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