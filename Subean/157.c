#include<stdio.h>
int main()
{
    int row, col, n;
    printf("Enter your graph size: ");
    scanf("%d",&n);
    for(row=n; row>0; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("C");
        }
        printf("\n");
    }

    for(row=2; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("C");
        }
        printf("\n");
    }
}
