
// a) W.A.P to input few elements in a matrix & display those matrix


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
    
    getch();

    return 0;

}