//Write a program in C to find transpose of a given matrix.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[3][3],T[3][3];
    printf("Give your 3 X 3 matrix: \n");
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            cin>>A[row][col];
        }
    }
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            T[col][row]=A[row][col];
        }

    }
    cout<<"\nTranspose Matrix of the given Matrix: "<<endl;
     for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            cout<<T[row][col]<<" ";
        }
        cout<<endl;
    }
}
