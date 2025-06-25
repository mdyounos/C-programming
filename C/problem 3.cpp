//Write a program to average a 1-D array elements.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    printf("Enter your array size: ");
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
    printf("average of the elements: %.2f",sum/(float) n);
}
