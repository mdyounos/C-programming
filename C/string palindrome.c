#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int flag=0,j;
    printf("Enter a string: ");
    scanf("%s",&str);
    j=strlen(str);
    for(int i=0; i<j;i++,j--)
    {
      if(str[i]==str[j-1])
      {
          flag=1;
      }
    }
    if(flag==1)
    {
        printf("This is palindrome string.");
    }
    else
        printf("This is not palindrome string.");
    return 0;
    }
