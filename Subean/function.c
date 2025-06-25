#include<stdio.h>
int digit(char ch);
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    printf("%d\n",digit(ch));
}
int digit(char ch)
{
    if(ch>='0'&&ch<='9')
        return 1;
    else
        return 0;
}
