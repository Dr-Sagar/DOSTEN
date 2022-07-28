
// W.A.P to convert degree centigrade to degree farenheit


#include<stdio.h>
 
#include<math.h>

 int main(int argc, char const *argv[])
{
    float a,c1,f1,k1,k2;
    char x;
    printf("Enter temperature Value\n");
    scanf("%f%c", &a,&x);
//    printf("Enter c for celcius and f for farenheit\n");
//    scanf("%c", &x);

   	c1=(5*(a-32))/9;
    f1=((9*a)+160)/5;

switch (x)
{
case 'c':
    printf("%.2f f",f1);break;
case 'C':
    printf("%.2f f",f1);break;

case 'f':
    printf("%.2f c",c1); break;
case 'F':
    printf("%.2f c",c1); break;

default:
printf("Sehi se likho");
    break;
}


printf("\n");

k1=(c1+273.15);
k2=(((f1-32)*5)/9)+273.15;

switch (x)
{
case 'c':    
    printf("%.2f k",k2);break;
case 'C':
    printf("%.2f k",k2);break;

case 'f':
    printf("%.2f k",k1); break;
case 'F':
    printf("%.2f k",k1); break;

default:
printf("Sehi se likho");
    break;
}


    return 0;
}
