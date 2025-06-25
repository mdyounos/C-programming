#include<stdio.h>
int main()
{
    int sum = 0, n;
    scanf("%d",&n);
    while(n>=0)
    {
        sum+=n;
        scanf("%d",&n);
    }
    printf("sum = %d",sum);

    return 0;
}
