
// W.A.P to demonstrate switch case & break statement

#include<stdio.h>
#include<conio.h>

int main()
{
    int ch;

    printf("Enter your choice\n");
    scanf("%d",&ch);
    switch ((ch))

    {
    case 1:
        printf("one");break;
    case 3:
        printf("Three");break;
    case 2:
        printf("TWo");break;
    case 4:
        printf("Four");
        break;
    
    
    default:
    printf("Hello !");
        break;
    }
}