#include<stdio.h>


int main()
{
    int n,flag=0;
    printf("Give a value: ");
    scanf("%d",&n);
    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("This is a prime number.");
    else
        printf("This is not a prime number.");
}


