#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000];
    int T;
    scanf("%d%*c",&T);
    for(int i=1; i<=T; i++)
    {
    int cnt=1;
    gets(s);
    for(int j=0;j<strlen(s);j++)
    {
        if(s[j]==' ')
            cnt++;
    }
    printf("Count = %d\n",cnt);
    }
    return 0;
}
