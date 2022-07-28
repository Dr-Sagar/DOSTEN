
// Programme to convert degree farenheit to degree centigrade


#include<stdio.h>
 
#include<math.h>

int main(int argc, char const *argv[])
{
    float c,f;
    printf("Enter farenheit Value\n");
    scanf("%f", &f);
       c=((f-32)/1.8000);
    printf("The centigrade value is %.2f",c);


    return 0;
}

