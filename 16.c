
// W.A.P to find the factorial of any given numbers

# include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,n;

    printf("Input number to find Factorial\n");
    scanf("%d",&n);

        for ( i = 1; i <=n ; i++)
        {
            if (n%i == 0)
            printf("%d is a Factorial of %d\n",i,n);
        }
        

    return 0;
}
