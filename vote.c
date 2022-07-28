#include<stdio.h>

int main()
{
    int a;
    
    printf("Enter your Age\n");
    scanf("%d",&a);

    if (a>=18)
    {
        printf("You are Eligible to vote");
    }
    else
    {
        printf("You are not Eligible to vote");
    }
    
    return 0;
}
