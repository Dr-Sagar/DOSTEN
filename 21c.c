
// W.A.P to obtain the following series
//  c) s=1+2+4+8+.....2^n

# include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int n,i,s=0;
    printf("Enter a number\n");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        s=s+pow(2,i);
    }
    printf("%d",s);

    return 0;
}
