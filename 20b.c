
// W.A.P to check a number wether it is arm strong or not

# include <stdio.h>

int main(int argc, char const *argv[])
{
    int n,r,s=0,n1; 

    printf("Enter any number\n");
    scanf("%d",&n);

    n1 = n;

            while (n>0)
            {
                r = n % 10;
                s = s+(r*r*r);
                n =n/10;
            }
                if (n1==s)
                
                    printf("%d is an Armstrong number",n1);
                
                else 
                    printf("%d is not Armstrong number",n1);
                
    return 0;
}




