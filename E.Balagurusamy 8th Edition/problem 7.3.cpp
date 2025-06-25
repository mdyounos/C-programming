#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,n;
    long int p;
for(int k=0;k<=20;k++)
{
    cout<<k<<"\t";
    n=pow(2,k);
    cout<<n<<"\t";
    k=(double) k;
    p=pow(2,-k);
    cout<<p<<endl;
}
    return 0;
}
