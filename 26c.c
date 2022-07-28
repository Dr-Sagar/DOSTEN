
// c) W.A.P to perform the addition of two matrices

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
int a[10][10],b[10][10],c[10][10],m1,n1,m2,n2,i,j;
printf("enter the order of first matrix\n");
scanf("%d%d",&m1,&n1);
printf("enter order of the second matrix\n");
scanf("%d%d",&m2,&n2);
if(m1!=m2 || n1!=n2)
printf("Addition is not possible");
else
{

	printf("enter the 1st matrix\n");
for(i=0;i<m1;i++)
{
	for(j=0;j<n1;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
		printf("enter the 2nd matrix\n");
for(i=0;i<m2;i++)
{
	for(j=0;j<n2;j++)
	{
		scanf("%d",&b[i][j]);
	}
}
		printf("the 1st matrix is\n");
for(i=0;i<m1;i++)
{
	for(j=0;j<n1;j++)
	{
		printf("%d\t",a[i][j]);
	}
		printf("\n");
	}
		printf("the 2nd matrix is\n");
for(i=0;i<m2;i++)
{
	for(j=0;j<n2;j++)
	{
		printf("%d\t",b[i][j]);
	}
	printf("\n");
}
for(i=0;i<m1;i++)
{
	for(j=0;j<n1;j++)
	{
		c[i][j]=a[i][j]+b[i][j];
	}
	
}
printf("the sum of the two matrix is\n");
for(i=0;i<m1;i++)
{
	for(j=0;j<n1;j++)
	{
		printf("%d\t",c[i][j]);
	}
	printf("\n");
}
}
}