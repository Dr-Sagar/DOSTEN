# include <stdio.h>

int main(){
    int a,b,c,d,e,f,g,h,i,m;

    printf("Enter the six numbers\n");

    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);

    g = a>b? (a>c?a:c):(b>c?b:c);
    h = d>e? (d>f?d:f):(e>f?e:f);

    m=(g>h?g:h);

    i=0;
    while (i<2)
    {
        printf("The largest number is : %d",m);
        break;
    }

    return 0;
}