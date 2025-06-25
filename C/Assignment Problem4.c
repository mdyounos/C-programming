#include<stdio.h>
void RepCh(char str[], char search_char, char new_char);
int main()
{
    char str[]={'\0'};
    char search_char,new_char;

    printf("Give a word: ");
    scanf("%s%*c",&str);

    printf("Give a search character: ");
    scanf("%c%*c",&search_char);

    printf("Give a new character: ");
    scanf("%c%*c",&new_char);

    RepCh(str, search_char, new_char);
    printf("\nThe string after replace: %s\n",str);
    return 0;
}

void RepCh(char str[], char search_char, char new_char)
 {
        for(int i=0; i<20;i++)
        {
            if(str[i]==search_char)
            {
                str[i]=new_char;
            }
        }
 }
