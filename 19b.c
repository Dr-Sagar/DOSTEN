
// W.A.P to find the factorial of any number using Do While-Loop


# include <stdio.h>

int main(int argc, char const *argv[])
{
    int n,i,f=1;
    printf("Enter any number\n");
    scanf("%d",&n);

    i=1;
    do
    {
        f=f*i;
        i++;
    } 
    while (i<=n);
    printf("factorial is %d\n",f);

    return 0;
}
