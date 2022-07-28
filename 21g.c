#include <stdio.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 int main(int argc, char *argv[]) 
{
	int a=0,b=1,c,i,n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	printf("%d\t%d\t",a,b);
	for(i=3;i<=n;i++)
	{
	c=a+b;
	printf("%d\t",c);
	a=b;
	b=c;
	}

    return 0;
}