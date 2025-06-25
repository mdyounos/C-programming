//Write a program to input and print a 2-D array elements.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    printf("Give Row and Column of array: ");
    scanf("%d%d",&m,&n);
    printf("Give array elements: ");
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    }
    printf("elements of array: ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",arr[i][j]);

    }
return 0;
}
