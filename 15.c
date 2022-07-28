
// W.A.P to print multiplication table of any given number

# include <stdio.h>

int main(int argc, char const *argv[])
{
    int n,i;

    printf("Input a Number\n");
    scanf("%d",&n);

    for ( i = 1; i <= 10; i++)
    {
        printf("%dx%d =%d\n",n,i,n*i);
    }
    
    return 0;
}
