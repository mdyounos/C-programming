#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j,k,i=0,a[10]={0};
    for(k=1;k<=16;k++)
    {
        n=k;
        printf("%d\t",n);
    while(n!=0)
    {
        a[i]=n%2;
        n=n/2;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    printf("\n");
    }
}
