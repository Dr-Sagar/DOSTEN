#include<stdio.h>
#include<stdlib.h>
 
int main() {
    char *name = (char *) malloc(100);
    printf("Enter Your Name\n");
    scanf("%s", name);
    
  
    printf("Hello %s", name);
}

