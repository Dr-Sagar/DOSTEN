#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
float n,i,f=1,s=0.0,j;
printf("enter the value of n\n");
scanf("%f",&n);
for(i=1;i<=n;i++)
{
	f=1;
	for(j=1;j<=i;j++)
	{
		f=f*j;
	}
	s=s+(i/f);
}
printf("%d\n",s);
}