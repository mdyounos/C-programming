//Write a program to read in a text file “sentence.txt” which contains some
//sentences (each sentence is terminated by ‘.’ , ’?’ or ‘!’) and output another text
//file “copy.txt” that has the contents of the first text file with sentence numbers.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    FILE *fpcopy;

    char str[200]="\0";
    int j=2;
    ///For Data write in a file
    fp = fopen("sentence.txt", "w");
    fprintf(fp,"My Name is X. I am a student. I read in DUET,Gazipur. Do You Know me?");
    fclose(fp);

    fp = fopen("sentence.txt", "r");
    fpcopy=fopen("copy.txt", "w");

    fprintf(fpcopy, "1 ");
    for(int i=0; i<100; i++)
    {
        fscanf(fp, "%c",&str[i]);

        if(str[i]=='.')
            fprintf(fpcopy, "%c\n%d",str[i],j++);
        else if(str[i]=='?')
            fprintf(fpcopy, "%c",str[i]);
        else
            fprintf(fpcopy, "%c",str[i]);


    }

        fclose(fp);
        fclose(fpcopy);
    return 0;
}
