
// W.A.P to find a^b


# include<stdio.h>
# include<conio.h>
# include<math.h>


int main()
{
    int a,b,r;
    printf("Enter Base and Exponent\n");
    scanf("%d%d",&a,&b);
    r = pow(a,b);
    printf("The result is %d",r);

    return 0;
}



