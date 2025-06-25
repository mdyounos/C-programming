#include<stdio.h>
#include<string.h>
int main()
{
    int num,k,a[100],i=0,j=0;
    for(k=0;k<=16;k++)
    {
        num=k;
        memset(a,0,sizeof(a));
        printf("%d\t",k);
        while(num!=0)
    {
        a[i++]=num%2;
        num=num/2;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    printf("\n");
    }

}
