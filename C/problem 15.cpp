//Write a program in C to count the frequency of each element of an array.
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
    cout<<endl<<endl<<"The frequency of all elements of an array:"<<endl;
    for(int i=0;i<100;i++)
    {
        if(count[i]!=0)
        printf("%d occurs %d times\n",i,count[i]);
    }
    cout<<endl;
    return 0;
}
