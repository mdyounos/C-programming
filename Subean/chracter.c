#include<stdio.h>
int main()
{
    char ch;
    printf("Give a character: ");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
        printf("Lowercase Character");
    else if(ch>='A'&&ch<='Z')
        printf("Uppercase Character");
    else if(ch>=0&&ch<=9)
        printf("Numerical Digit");
    else
        printf("Special Character");
}
