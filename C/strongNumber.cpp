#include<stdio.h>
int main()
{
int n,n1,sum=0,remiandar,fact;
printf("Enter a Number: ");
scanf("%d",&n);
n1=n;
while(n!=0)
{
    remiandar=n%10;
    fact=1;
    for(;remiandar>=1;remiandar--)
    {
        fact=fact*remiandar;
    }
    sum=sum+fact;
    n=n/10;
}
if(n1==sum)
    printf("%d is a strong number.",n1);
    else
        printf("%d is not a strong number.");
}
