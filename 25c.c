
// c) W.A.P to find the largest number from an Array  



#include<stdio.h>
#include<conio.h>

int main()
{
    int a[100],n,i,l;

     printf("Enter number of Elements \n");
    scanf("%d",&n);
    printf("Enter Array Elements\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        printf("Array Elements are \n");
    
        for (i=0;i<n;i++)
        {
            printf("%d\t", a[i]);
        }
        
    

l=a[0];
for(i=1;i<n ; i++)

    {
    if (a[i]>l)
    l=a[i];
    }

printf("\n The Largest Element is %d",l);

}