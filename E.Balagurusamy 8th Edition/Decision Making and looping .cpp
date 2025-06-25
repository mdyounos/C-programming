//fibonacci number program
#include<bits/stdc++.h>
using namespace std;
int main()
{
//    int f1=0, f2=1, n, i, fibo;
//    scanf("%d",&n);
//    for(i=1;i<=n-2;i++)
//    {
//        fibo=f1+f2;
//        f1=f2;
//        f2=fibo;
//    }
//    printf("%d",f2);
//int n;float sum=0;
//float avg;
//for(int m=1;m<=1000;m++)
//{
//    scanf("%d",&n);
//    if(n<0)
//        break;
//    sum=sum+n;
//}
//    avg=sum/(float) (m-1);
//printf("%f",avg);
int n;
scanf("%d",&n);
for(int row=1;row<=n;row++)
{
    for(int col=1;col<=n;col++)
    {
        if(col==n-(row-1)||col==row)
            printf("*");
        else
            printf(" ");
    }
    printf("\n");
}
}
