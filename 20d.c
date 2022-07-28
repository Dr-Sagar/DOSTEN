
// W.A.P to check a number wether it is palimdrome or not


# include <stdio.h>

int main()
    {
        int n,r, s=0,n1;
        
        printf("Give the Input\n");
        scanf("%d",&n);
        
        n1=n;

        while (n>0)
        {
            r = n%10;
            s = r+(s*10);
            n = n/10;
        }

        if (n1==s)
{
        printf("%d is palindrome",n1);
}
        else
{
        printf("%d is not palindrome",n1);
}       
    }