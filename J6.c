# include <stdio.h>
# include <conio.h>

  main()
{
    int n,r;
    // clrscr();
    printf("Enter any no. for the factorial\n");
    scanf("%d",&n); 
    r=rec(n);
    printf("%d",r);
    // getch();
}



int rec(int n1;)
{
    int f,n1;
    if (n1==1)
    return 1;
    else
    f=n1*rec(n1-1);
    return f;
}
