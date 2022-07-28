
// f) W.A.P to search an element wether it is present or not in a given array



#include<stdio.h>
#include<conio.h>

int main()
{
    int a[100],n,i,n1,c=0;

   
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
        

printf("\n Enter the elements to be searched \n");
scanf("%d",& n1);
 

 for ( i = 0; i < n; i++)
 {
     if (a[i] ==  n1)
     c=c+1;
 }
 
if (c==0)
printf("Item is not found");
else
printf("Item is present for %d times",c);


}