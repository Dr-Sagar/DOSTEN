
// W.A.P to check wether it is leap year or not, using logical operator

# include <stdio.h>
# include <conio.h>

int main(int argc, char const *argv[])
{
    int  y;

    printf("Enter any Year\n");
    scanf("%d",&y);

    if(y%400==0 || y%100 !=0 && y%4==0)
    printf("This is a Leap Year");

    else
    printf("This is not a Leap Year");
    
    return 0;
}
