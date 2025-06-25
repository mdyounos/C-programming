#include<stdio.h>
int cnt=0;
int divide (int num1, int num2)
{
    for(;num1>=num2;num1=num1-num2)
    {
        cnt++;
    }
    return cnt;
}
int main()
{
    int num1,num2,quo;
    printf("m = ");
    scanf("%d",&num1);

    printf("n = ");
    scanf("%d",&num2);

    quo=divide(num1,num2);
    printf("The quotient is: %d",quo);
}

