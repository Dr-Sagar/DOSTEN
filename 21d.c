
// W.A.P to obtain the following series
// d) s=factorial1+factorial2+factorial3+.........factorialn


#include<stdio.h>

int main(int argc, char const *argv[])
{
    


int n,i,s=0,f,j;

printf("Enter the value of n\n");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
f=1;
for(j=1;j<=i;j++);
{
f=f*j;
}
s=s+f;
}
printf("%d",s);

    return 0;}