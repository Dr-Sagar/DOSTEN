
// W.A.P to check a triangle wether it is equilateral ,scalen or isocles

# include <stdio.h>
# include <conio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;

    printf("Enter three sides of any triangle \n");
     scanf("%d%d%d",&a,&b,&c);

     if (a==b && b==c && c==a)
     printf("It is an Equilateral Triangle");

     else
     if (a!=b && b!=c && c!=a)
     printf("It is a Scalen Triangle");

     else 
     printf("It is an Isocles triangle");

    return 0;
}
