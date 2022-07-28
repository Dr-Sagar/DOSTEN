
// W.A.P to swap two varibles using third variables 


# include<stdio.h>
# include<conio.h>





int main(int argc, char const *argv[])
{
    
    int a,b,c;
  
    printf("Enter the values for a and b\n");
    scanf("%d%d",&a,&b);
    printf("before swapping a=%d and b=%d \n",a,b);
    c=a;
    a=b;
    b=c;
    printf("after swapping a=%d and b=%d\n",a,b);
    getch();


    return 0;
}
