//Suppose you have a file named “number.txt” in your HDD which contains a
//series of integer numbers. You need to write a program to read these numbers
//and then print on screen.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    int numbers[]={10,52,63,98,54,75,12,53,39,98};

    fp=fopen("number.txt","w");

    for(int i=0; i<10;i++)
    {
        fprintf(fp,"%d ",numbers[i]);
    }

    fclose(fp);

    fp=fopen("number.txt","r");

    printf("The Numbers of file: ");
    for(int i=0; i<10;i++)
    {
        fscanf(fp,"%d ",&numbers[i]);
        printf("%d ",numbers[i]);
    }

    printf("\n");

    fclose(fp);
    return 0;
}
