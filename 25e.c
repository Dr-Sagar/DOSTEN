
// e) W.A.P to find the sum of all Array elements  


#include<stdio.h>
#include<conio.h>

int main()
{
    int a[100],n,i,s=0;

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
    

for ( i = 0; i < n; i++)
{
    s=s+a[i];
}

printf("\n Sum of Array Elements are %d",s);

}