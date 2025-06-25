//Write a program to input and print a 1-D array elements.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    printf("Enter your array size: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
