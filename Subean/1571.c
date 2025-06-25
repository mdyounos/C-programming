#include<stdio.h>
int main()
{
    int row, col, space, n;
    printf("Give the graph size: ");
    scanf("%d",&n);
    for(row=n; row>0; row--)
    {
        for(space=n; space>row;space--)
        {
            printf(" ");
        }
        for(col=1; col<=2*(row-1)+1; col++)
        {
            printf("C");
        }
        printf("\n");
    }

    for(row=2; row<=n; row++)
    {
        for(space=n; space>row;space--)
        {
            printf(" ");
        }
        for(col=1; col<=2*(row-1)+1; col++)
        {
            printf("C");
        }
        printf("\n");
    }
}
