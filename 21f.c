



# include <stdio.h>

int main() {
    int a=0,b=1,c,s,n,i;

    printf("Enter the value of n\n");
    scanf("%d",&n);

    s=a+b;

    for (i=3;i<=n; i++)

    {
        c=a+b;
        s=s+c;
        a=b;
        b=c;

    }
    printf("%d\n",s);
    
}