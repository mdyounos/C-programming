#include<stdio.h>
int main()
{
    FILE *fp;
    char c;

    printf("Data input: ");
    fp=fopen("INPUT","w");
    while((c=getchar())!=EOF)
        putc(c, fp);
    fclose(fp);

    printf("\nData Output: ");
    fp=fopen("INPUT","r");
    while((c=getc(fp))!=EOF)
        printf("%c",c);
    fclose(fp);

    return 0;
}
