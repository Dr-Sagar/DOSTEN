
// W.A.P to find the factorial of any given number

# include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,n,f;
    
    printf("Enter a number to find the factorial ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        f=f*i;
    }
    
    printf("factorial=%d",f);

    return 0;
}
