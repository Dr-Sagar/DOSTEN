
// W.A.P to convert degree centigrade to degree farenheit


#include<stdio.h>
 
#include<math.h>

int main(int argc, char const *argv[])
{
    float c,f;
    printf("Enter Centrigrade Value\n");
    scanf("%f", &c);
    f=((9*c)+160)/5;
    printf("The farenheit value is %.2f",f);


    return 0;
}

