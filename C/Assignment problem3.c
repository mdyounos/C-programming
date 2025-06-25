#include<stdio.h>
#include<string.h>

int TestPalindrome(char str[])
{
    int i, j;
    i=0;
    j=strlen(str)-1;
    while(i<j)
    {
        if(str[i]!=str[j])
    {
        return 0;
    }
    i++;j--;
    }
    return 1;
}
int main()
{
    int flag;
    char str[100];
    printf("Give a string: ");
    scanf("%s",&str);
    flag=TestPalindrome(str);
    if(flag==1)
    {
        printf("This is a palindrome string.");
    }
    else
    {
        printf("This is not a palindrome string.");
    }
    return 0;
}
