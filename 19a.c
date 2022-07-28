
// W.A.P to find the factorial of any number using While-Loop

# include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,n,f=1;

    printf("Enter any number\n");
    scanf("%d",&n);

    while (i<=n)

    {
        f=f*i;
        i++;
    }

    printf("Factorial is %d",i);
    
    return 0;
}
