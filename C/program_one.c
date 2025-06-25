#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *string,*chooseWord;
    string=(char*)malloc(100*sizeof(char));
    chooseWord=(char*)malloc(100*sizeof(char));

    printf("Enter any string: ");
    gets(string);
    printf("Enter word to be searched: ");
    gets(chooseWord);
    int i,index=0,found=0;

    while(string[index] !='\0')
    {
        if(string[index]==chooseWord[0])
        {
            i=0;
            found=1;
            while(chooseWord[i]!='\0')
            {
                if(string[index+i] !=chooseWord[i])
                {
                    found=0;
                    break;
                }
                i++;
            }
        }
        if(found==1) break;
        index++;
    }
    if(found==1)
        printf("\n%s is Found at index %d\n",chooseWord,index);
    else
        printf("\n%s is not Found\n",chooseWord);

    return 0;
}
