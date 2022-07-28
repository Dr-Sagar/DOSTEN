
// W.A.P to find the perimeter and area of triangkle


# include <stdio.h>
# include <conio.h>
# include <math.h>

float main(int argc, char const *argv[])
{
    float a,b,c,p,s,area;
    printf("Enter the three sides of a triangle\n");
    scanf("%f%f%f",&a,&b,&c);
    p=a+b+c;
    s=p/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    // printf("Enter the breadth of the rectangle\n");
    // scanf("%d",&b);
    // p=2*(l+b);
    // area=l*b;
    printf("perimeter=%.2f \t Area=%.2f",p,area);


    return 0;
}
