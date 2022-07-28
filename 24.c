
// Write a menu driven programme to perform different arithmatic operation(+,-,/,*,etc)


#include<stdio.h>
#include<conio.h>

int main()
{
    char op;
    int a,b;

    printf("Enter the expression\n");
    scanf("%d%c%d",&a,&op,&b);
    switch (op)
    {
         case '+':
        printf("%d%c%d=",a,op,b) ; printf("%d",a+b);
        break;

         case '-':
        printf("%d%c%d=",a,op,b);  printf("%d",a-b);
        // printf("%d%c%d=%d",a,op,b,a-b);
        break;

         case '*':
        printf("%d%c%d=",a,op,b) ; printf("%d",a*b);
        // printf("%d%c%d=%d",a,op,b,a*b);
        break;

         case '/':
        printf("%d%c%d=",a,op,b);  printf("%d",a/b);
        // printf("%d%c%d=%d",a,op,b,a/b);
        break;
    
    default:
    printf("Enter valid expression only");
        break;
    }
}