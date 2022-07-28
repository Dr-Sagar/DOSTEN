
// W.A.P to find the larger amoung two numbers 


# include <stdio.h>
# include <conio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter any two numbers \n");
    scanf("%d%d",&a,&b);

    /*if (a>b)
    {
        printf("%d is larger",a);
    }
    else
    {*/

c=a>b?a:b;
        printf("%d is larger",c);
    
    
    return 0;
}
