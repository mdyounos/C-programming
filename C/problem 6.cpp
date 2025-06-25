//Write a C Program to Reversing an Array Element.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    printf("Give Array Size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Give elements: ");
    for(int i=0; i<n; i++)
    {
            scanf("%d",&arr[i]);
    }
    printf("\nReverse of the array:\n");
    for(int i=n-1; i>=0; i--)
    {
            printf("%d ",arr[i]);
    }
    printf("\n");
}
