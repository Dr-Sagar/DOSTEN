
// W.A.P to find the sum of digits of any given number

# include <stdio.h>

int main(int argc, char const *argv[])
{
    int

     n,r,s=0;

     printf("Enter any Number\n");
     scanf("%d",&n);

     while(n>0)
     {
         r = n %10;
         s = s+r;
         n = n/10;

     }

     printf("Sum of the digits %d",s);

    return 0;
}
