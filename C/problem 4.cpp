//Write a C Program to delete an element from the specified location from Array.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    printf("Enter Your array size: ");
    scanf("%d",&n);
    printf("Give your elements: ");
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int rep;
    printf("Enter your replace position number: ");
    scanf("%d",&rep);
    if(rep>0&&rep<=n){
    for(i=0;i<n;i++)
    {
        if((rep-1)<i)
        {
            arr[i-1]=arr[i];
        }
    }
    printf("Now elements of array: \n");
    for(i=0;i<n-1;i++)
        {
            printf("%d ",arr[i]);
        }
    }
}
