
// h) W.A.P to delete an element from an given array


#include<stdio.h>
#include<conio.h>

int main()
{
    int a[100],n,i,k;

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
        


printf("\n Enter positions\n");
scanf("%d",&k);

for (i=k-1;i<=n-2;i++)
{
    a[i]=a[i+1];
}

n=n-1;
printf("After Deletion\n");
    for (i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}


    
}