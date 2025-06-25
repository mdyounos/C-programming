//Write a C Program to insert an element into the specified location in an array.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //For array input
    int n;
    printf("Give array size: ");
    scanf("%d",&n);
    int arr[n]={0};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //For inserting input
    printf("insert position number: ");
    int add;
    scanf("%d",&add);
    printf("Give the number for insert: ");
    int Newnum;
    scanf("%d",&Newnum);
    //For inserting
    if(add>0&&add<=n)
    {
        for(int i=n;i>=add;i--)
        {
                arr[i]=arr[i-1];
        }
        arr[add-1]=Newnum;
    //For output
        for(int i=0;i<=n;i++)
        {
            printf("%d ",arr[i]);
        }
    }
}
