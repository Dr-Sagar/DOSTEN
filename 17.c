
// W.A.P to check a number wether it is prime or not

# include <stdio.h>

 int main(int argc, char const *argv[])
 {
     int  c=0,i,n;

     printf("Enter any number\n");
     scanf("%d",&n);

        for (i=1;i<=n;i++)
        {
            if (n%i==0)
             c++;
        }

        if (c==2)
        {
            printf("%d is a prime number",n);
        }
        else
        {
            printf("%d is not a prime number",n);
        }
        
        
          return 0;
 }
 