# include <stdio.h>
# include <conio.h>

int main(void)
{
    int numrows = 0;

    printf("Enter the total number of rows :");
    scanf("%d", &numrows);

    for (int row = numrows; row >= 1; row--)
    {
        for (int column = 1; column <= row ; column++)
        {
            printf("%d ",column);
        }
        printf("\n");
    }

}