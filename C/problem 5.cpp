//Write a program to C Program to Find Largest/Smallest Element in an Array.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    printf("Give array size: ");
    scanf("%d",&n);
    int arr[n]={0};
    printf("Give Elements: ");
    for(int i=0;i<n;i++)
    {
            scanf("%d",&arr[i]);
    }
    //For largest value
    int largest=arr[0];
    for(int i=0; i<n;i++)
    {
        if(arr[i]>largest)
            largest=arr[i];
    }
    printf("\n");
    printf("The Largest Number is: %d\n",largest);
    //For smaller value
    int smaller=arr[0];
    for(int i=0; i<n;i++)
    {
        if(arr[i]<smaller)
            smaller=arr[i];
    }
    printf("\n");
    printf("And The smaller Number is: %d\n",smaller);

}
