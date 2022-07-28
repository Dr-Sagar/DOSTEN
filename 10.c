
// W.A.P to check a number wether it is odd or even

# include <stdio.h>
# include <conio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Enter any Number \n");
    scanf("%d",&n);
    if (n%2 == 0)
    printf("%d is Even",n);

    else
    printf("%d is Odd",n);
    
    return 0;
}
