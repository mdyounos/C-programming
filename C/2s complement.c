#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[20];
    int i,j,len;
    gets(a);
//    len=strlen(a);
    for(i=6; a[i]!='1';i--);
    for(j=i-1;j>=0;j--)
    {
        if(a[j]=='1')
        a[j]='0';
        else
        a[j]='1';
    }
    printf("%s",a);

    return 0;
}
