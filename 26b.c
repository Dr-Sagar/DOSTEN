
// b) W.A.P to obtain the transpose of any given matrix


# include<stdio.h>
# include<conio.h>

int main ()
{
    int a[10] [10],m,n,i,j;
    
    printf("Enter the order of the matrix \n",n);
    scanf("%d%d",&m,&n);

    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("Enter matrices\n");
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("The matrix is:\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0;j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }



printf("The transpose of the Matrix is\n");
for ( i = 0; i < m; i++)
{
            printf("%d\t",a[i][j]);
}


    getch();

    return 0;

}