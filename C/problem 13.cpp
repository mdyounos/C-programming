//Write a program in C to print all unique elements in an array.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    printf("Enter the array size: ");
    scanf("%d",&n);
    int arr[n];
    cout<<"Give elements: ";
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count[100]={0};
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    cout<<"\nOnly unique numbers: ";
    for(int i=0;i<100;i++)
    {
        if(count[i]==1)
        printf("%d ",i);
    }
    cout<<endl;
    return 0;
}
