#include<stdio.h>
int main()
{
    int n=5;
    for(int row=1; row<= n; row++)
    {
        for(int col=1; col<=row; col++)
        {
            if((row%2==0&&col%2==1)||(row%2==1&&col%2==0))
                printf("1");
            else
                printf("0");
        }
            printf("\n");
    }
    return 0;
}
