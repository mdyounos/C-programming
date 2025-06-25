#include<stdio.h> 
int main()
{
    int a=2;
    FILE *fp;
    char c;
    fp=fopen("filename.txt", "r");
    c = getc(fp);
    printf("%c",c);
    fclose(fp);
    return 0;
}
