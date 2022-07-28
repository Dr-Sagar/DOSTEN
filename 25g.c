
// g) W.A.P to insert an element to a specific position of an given Array

#include<stdio.h>
#include<conio.h>

int main()
{
    int a[100],n,i,k,item;

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
printf("\n Enter position & item\n");

scanf("%d%d",&k,&item);
for (i=n-1;i>k+1;i--)
{
    a[i+1]=a[i];
}

a[k-1]=item;
n=n+1;

printf("\n After insertion %d\t");
for (i=0;i<n-1;i++)
{
    printf("%d\t",a[i]);
}

}

