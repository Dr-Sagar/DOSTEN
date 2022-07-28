
// W.A.P to check character ,wether it is vowel or not ,using switch case statement

#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
    {
    char ch;
    printf("enter any charecter\n");
    scanf("%c",&ch);
    switch(ch)
    {
	case'a': 
	case'A':
    // printf("vowel");break;
	printf("vowel");
	break;
	case'e':
    // printf("vowel");break;
	case'E':
	printf("vowel");
	break;
	case'i':
    // printf("vowel");break;
	case'I':
	printf("vowel");
	break;
	case'o':
    // printf("vowel");break;
	case'O':
    printf("vowel");
	break;
	case'u':
    // printf("vowel");break;
	case'U':
    printf("vowel");break;

    default:
    	printf("consonent");
	}

}