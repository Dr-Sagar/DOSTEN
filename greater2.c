# include <stdio.h>

int main()
{
 int s,d;

printf("Enter the two values\n");
scanf("%d%d",&s,&d);


if (s>d)
    {printf("%d is grearter than %d",s,d);
    }
  else if (s==d)
  {
    printf("%d is similar to %d",s,d);
    }
    else{
        printf("%d is greater than %d",d,s);

    }
   

    return 0;
}
