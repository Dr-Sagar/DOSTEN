
// W.A.P to find the larger amoung three numbers using conditional operator


# include<stdio.h>
# include<conio.h>

int main()
{
    int a,b,c,d;
    printf("Enter any three numbers \n");
    scanf("%d%d%d",&a,&b,&c);
    
    d=a>b? (a>c?a:c): (b>c?b:c);
    printf("%d is largest",d);
    
        return 0;
}


