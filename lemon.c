# include<stdio.h>

int main(){

    int a,n,k;

    printf("Enter the Value\n");
    scanf("%d",&a);


    for (n=0;n<a;n++){
    // k=n*a;
    printf("%d*%d=%d\n",a,n,a*n);
    }

return 0;
}