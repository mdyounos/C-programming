#include<stdio.h>
int main()
{
    FILE *fp;
    int n;
    printf("Input data: ");
    fp=fopen("beforesort.txt","w");
    for(int i=1;i<=5;i++)
    {
        scanf("%d",&n);
        putw(n,fp);
    }
    fclose(fp);
    printf("Output data: ");
    fp=fopen("beforesort.txt","r");
    while((n=getw(fp))!=EOF)
    {
        printf("%d ",n);
    }
    fclose(fp);
    return 0;
}
