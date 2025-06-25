//Write a program to calculate the multiplication of two 3x3 matrices.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[3][3],B[3][3],C[3][3];
    //For Data input
    cout<<"Give A Matrix elements: "<<endl;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        cin>>A[i][j];
    cout<<"Give B Matrix elements: "<<endl;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        cin>>B[i][j];
    //For multiplying
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            int sum=0;
            for(int k=0;k<3;k++)
            {
                sum+=A[i][k]*B[k][j];
            }
            C[i][j]=sum;
        }

    }
    //For output
    printf("\nMultiplication Matrix of A & B Matrix: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }


}
