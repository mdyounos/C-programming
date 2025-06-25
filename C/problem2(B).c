//A file named “Number.txt” contains some integer values. Write a program to
//open the file and read the numbers one after another. If a number is Odd write it
//to a file, named “odd.txt”, otherwise write it to another file, named “even.txt”.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    FILE *fpe;
    FILE *fpo;

    int numbers[]={25,28,54,57,85,99,65,24,12,65};
    fp=fopen("Number.txt","w");
    fpe=fopen("even.txt","w");
    fpo=fopen("odd.txt","w");

    for(int i=0; i<10; i++)
    {
        fprintf(fp,"%d ",numbers[i]);
    }

    for(int i=0; i<10; i++)
    {
        fscanf(fp,"%d ",&numbers[i]);
        if(numbers[i]%2==0)
        {
            fprintf(fpe,"%d ",numbers[i]);
        }
        else
        {
            fprintf(fpo,"%d ",numbers[i]);
        }
    }
    printf("Ok. keep the numbers according to even or odd.\n");

    fclose(fp);
    fclose(fpe);
    fclose(fpo);
}
