
// W.A.P to find the larger amoung three numbers using nested if else 


# include<stdio.h>
# include<conio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter any three numbers \n");
    scanf("%d%d%d",&a,&b,&c);
    
    if (a>b)
    {
        if (a>c)
        printf("%d is largest",a);
        else
        printf("%d is largest",c);
    }
    // printf("%d is largest",a);

    else
    {
if    (b>c)
    printf("%d is largest",b);
    else
    printf("%d is largest",c);
    }
    
        return 0;
}
