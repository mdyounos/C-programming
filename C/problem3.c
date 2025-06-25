//A file named “text.txt” contains some sentences. Write a program to open the file
//and read the characters one after another and output the frequency of vowels
//and consonants.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;

    char string[]="We love Bangladesh. This is our homeland.";
    char str[100]={'\0'};
    int vowel=0, consonant=0;

    fp=fopen("text.txt","w");
    fprintf(fp,"%s",string);
    fclose(fp);

    fp=fopen("text.txt","r");
    for(int i=0; i<100; i++)
    {
        fscanf(fp,"%c",&str[i]);

        if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
        {
            if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
                {
                    vowel++;
                }
            else
                {
                    consonant++;
                }
        }
    }
    fclose(fp);

    printf("Number of Vowel: %d\n",vowel);
    printf("Number of Consonant: %d\n",consonant);
    return 0;
}
