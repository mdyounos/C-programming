#include<bits/stdc++.h>
using namespace std;
int main()
{

//    int row,col,n;
//    scanf("%d",&n);
//    for(row=1; row<=n; row++)
//    {
//        for(col=1; col<=row; col++)
//        {
//            printf("%d ",col%2);
//        }
//        printf("\n");
//    }
    int i,j,n,flag;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
{
    flag=0;
        for(j=2; j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        printf("%d ",i);
    }
}
