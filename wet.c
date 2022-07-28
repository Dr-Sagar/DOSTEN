# include<stdio.h>

int main()
{
    int i;

    i=1900;
    do {
        if (i%400==0 || i%4==0 && i%100!=0)
        printf("%d\n",i);
        i++;
    }
    while(i<=2100);

return 0;
}
