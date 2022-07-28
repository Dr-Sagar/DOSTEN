
// W.A.P to find the perimeter and area of rectangle




# include <stdio.h>
# include <conio.h>

int main(int argc, char const *argv[])
{
    int l,b,p,area;
    printf("Enter the length of the rectangle\n");
    scanf("%d",&l);
    printf("Enter the breadth of the rectangle\n");
    scanf("%d",&b);
    p=2*(l+b);
    area=l*b;
    printf("perimeter=%d \t Area=%d",p,area);


    return 0;
}
