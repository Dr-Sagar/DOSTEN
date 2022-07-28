
// W.A.P to obtain the following series
// b) s=1+3+5+7+.....n

#include<stdio.h>
#include<conio.h>

int  main()
{
    int n,i,s=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    {
    printf(i);
    }
    return 0;
}
