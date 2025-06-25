//Write a program to sort a list of elements in descending order.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Give your elements: ";
    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    printf("\nDescending order of the array: \n");
    for(int i=0;i<n;i++)
        {

            for(int j=i+1;j<n;j++){
                int largest=arr[i];
                if(largest<arr[j])
                {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }

            }

        }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
