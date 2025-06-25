//Write a function IntegerPower(base, power) that returns the value of base exponent .
#include<stdio.h>
int IntegerPower(int base, int power);
int mul=1;
int main()
{
    int base,power;
    printf("Give base: ");
    scanf("%d",&base);

    printf("Give power: ");
    scanf("%d",&power);

    mul=IntegerPower(base, power);
    printf("The Result is %d\n\n",mul);
    return 0;
}

int IntegerPower(int base, int power)
{
    int cnt=0;
    while(power>cnt)
    {
        mul=mul*base;
        cnt++;
    }
    return mul;
}
