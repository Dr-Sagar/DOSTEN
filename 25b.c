
// b) W.A.P to obtain the reverse of any given array  



#include<stdio.h>
#include<conio.h>

int main()
{
    int a[100],n,i;

    printf("Enter number of Elements \n");
    scanf("%d",&n);
    printf("Enter Array Elements\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
        printf("Array Elements are \n");
    
        for ( i = 0; i < n; i++)
        {
            printf("%d\t", a[i]);
        }
    printf("\n Reverse Array is \n");

    for ( i = n-1; i>=0; i--)
    {
        printf("%d\t",a[i]);
    }


}