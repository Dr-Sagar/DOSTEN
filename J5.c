# include <stdio.h>
# include <conio.h>

int rec(int);

main()
{
    int n,r;
    clrscr();
    printf("Enter any no\n");
    scanf("%d",&n);
    r=rec(n);
    printf("%d",r);
    getch();
}

int rec(int ni)
{
    int f;
    if (n1==1)
    return 1;
    else
    f=n1*rec(n1-1);
    return f;
}
