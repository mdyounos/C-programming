#include<stdio.h>
void sort(int *x,int n);
int main()
{
    int ara[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    sort(ara,n);
    for(i=0; i<n; i++)
    {
        printf("%d ",ara[i]);
    }
    return 0;
}
void sort(int *x,int n)
{
    int temp, i, j;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(*(x+i)>*(x+j))
            {
                temp = *(x+i);
                *(x+i) = *(x+j);
                *(x+j) = temp;
            }
        }
    }
}
