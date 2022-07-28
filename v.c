# include <stdio.h>

int main ()
{
    int m,n,i,s=0;

    printf("Enter m & n\n");
    scanf("%d%d",&m,&n);
    i=m;


    while(i<=n)
    {
        s=s+i;
        i++;

    }

    printf("The sum is %d",s);
    
}