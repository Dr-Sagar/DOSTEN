
// W.A.P to obtain the reverse of any given number

# include <stdio.h>

 int main()
    {
    int n,r,s=0;

    printf("Enter any Number\n");
    scanf("%d",&n);

    while (n>0)
    {
        r = n %10;
        s = r+(s*10);
        n = n/10;
    }
    
    printf("The reverse Number is %d",s);

    }
