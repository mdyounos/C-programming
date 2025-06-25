//Write a program in C to Merge the Elements of 2 Sorted Array.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    printf("Enter two array size: ");
    scanf("%d%d",&m,&n);
    int M[m],N[n],O[m+n];
    cout<<"Enter First array elements: ";
    for(int i=0;i<m;i++)
            cin>>M[i];
    cout<<"Enter second array elements: ";
    for(int i=0;i<n;i++)
            cin>>N[i];

    for(int i=0;i<m;i++)
    {
        O[i]=M[i];
    }
    int j=0;
    for(int i=m;i<m+n;i++)
        {
            O[i]=N[j++];
        }
    cout<<endl<<"only merged array the below: "<<endl;
    for(int i=0;i<m+n;i++)
    {
        cout<<O[i]<<" ";
    }
    printf("\nSorted and merged array the below: \n");
    for(int i=0;i<m+n;i++)
        {

            for(int j=i+1;j<m+n;j++){
                int smaller=O[i];
                if(smaller>O[j])
                {
                    int temp=O[i];
                    O[i]=O[j];
                    O[j]=temp;
                }

            }

        }
    for(int i=0;i<m+n;i++)
    {
        cout<<O[i]<<" ";
    }
}
