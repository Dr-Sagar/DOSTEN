
// W.A.P to check a year wether it is leap year or not

#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    int y;
    
    printf("Enter the year \n");
    scanf("%d",&y);

    if (y%100!= 0)
    {
        if (y%4 ==0)
        printf("This is a Leap Year");
        
        else
        printf("This is not a Leap Year");
    } 

    else  
    {
        if (y%400==0)
        printf("This is a Leap year");
    
        else
        printf("This is not a Leap Year");
    }

    return 0;
}
