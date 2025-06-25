#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col,n;
    printf("enter value: ");
    scanf("%d",&n);
    for(row=1;row<=(2*n-1);row++)
    {
        for(col=1;col<=(2*n-1);col++)
        {
            if(col==(n-row+1)||col==(n+row-1)||row==(2*n-col+1)||row==(n+col-1))
            {
                printf("1");
            }
            else
                printf(" ");

        }
        printf("\n");
    }
}
