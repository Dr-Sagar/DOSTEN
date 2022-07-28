
// W.A.P to convert degree centigrade to degree farenheit


#include<stdio.h>
#include<math.h>

float main()
{
    float a,c1,f1;
    char x;

    printf("Enter the temperature value\n");
    scanf("%f",&a);

    // printf("Choose celcius to farenheit or farenheit to celcius\n");
    printf("c[celcius] or f[farenheit]\n");
    scanf("%c",&x);

   	c1=(5*(a-32))/9;
    f1=((9*a)+160)/5;

    if (x=='c')
    {
    printf("The farenheit value is %f",f1);
    }
    else {
    printf("The celcius value is %f",c1); }
    return 0;
}

