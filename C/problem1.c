//Write a program to create a file named “test.txt” to store information

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char str[]="Hello DUET.";

    fp=fopen("test.txt","w");
    if(fp=='\0')
    {
        printf("Error");
        exit(0);
    }
    printf("File successfully created.\n");

    fprintf(fp,"%s",str);
    fclose(fp);

    return 0;
}
