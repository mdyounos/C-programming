#include<stdio.h>
#include "duet.h"

int main()
{
    int n;
    printf("Give a number: ");
    scanf("%d",&n);
    if(num(n)==0)
    {
        printf("it is a even number.");
    }
    else
        printf("it is a odd number.");
    return 0;
}
