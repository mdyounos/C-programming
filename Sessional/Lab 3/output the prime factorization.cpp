#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, i,j;
   scanf("%d",&num);
   for(i=2;i<num;i++)
   {
       if(num%i==0)
       {
           num=num/i;
           printf("%d X ",i);
           i=1;
       }
   }
   printf("%d",num);
}
