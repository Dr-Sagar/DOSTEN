
// W.A.P to find the perimeter and of square 


# include <stdio.h>
# include <conio.h>

float main(int argc, char const *argv[])
{
    float r,p,area;
    printf("Enter the radius\n");
    scanf("%f",&r);
    // printf("Enter the breadth of the rectangle\n");
    // scanf("%d",&b);
    p=2*3.14*r;
    area=3.14*r*r;
    printf("perimeter=%.2f \t Area=%.2f",p,area);


    return 0;
}
