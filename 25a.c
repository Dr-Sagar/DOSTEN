
// a) W.A.P to input few elements in an array & display those elements


#include<stdio.h>
#include<conio.h>

int main()
{
    int a[100],n,i;

    printf("Enter number of Elements \n");
    scanf("%d",&n);
    printf("Enter Array Elements\n");
    for ( i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
        printf("Array Elements are \n");
    
        for ( i = 0; i < n; i++)
        {
            printf("%d\t", a[i]);
        }
        
    
}