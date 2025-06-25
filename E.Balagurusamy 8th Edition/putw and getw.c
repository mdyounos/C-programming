#include<stdio.h>
int main()
{
    FILE *fp;
    int num=12;

    fp=fopen("Data.txt","w");
    putw(num,fp);
    fclose(fp);

    return 0;
}
