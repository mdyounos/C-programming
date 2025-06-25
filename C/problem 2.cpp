//Write a C Program to Calculate Addition of All Elements in Array.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    printf("Enter Your Size: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("Addition of All Elements: %d",sum);
    return 0;
}
