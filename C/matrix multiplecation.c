#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10][10], b[10][10], r[10][10];
    int i,j,k,m,n,p,t;
    scanf("%d%d",&m,&n);
    scanf("%d%d",&p,&t);
    if(n!=p)
    {
        printf("Multiply is impossible");
        exit(0);
    }
    for(i=0; i<m; i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    for(i=0; i<p; i++)
    {
        for(j=0;j<t;j++)
        {
            scanf("%d",&b[i][j]);
        }

    }

    for(i=0; i<m; i++)
    {
        for(j=0;j<t;j++)
        {
            r[i][j]=0;
            for(k=0;i<p;k++)
            {
                r[i][j]+=a[i][k]*b[k][j];

            }
        }

    }
}
