//Edit the problem 2 and write a recursive function to solve the problem.
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
    if(power==0)
        return 1;
    else
        return base*IntegerPower(base, power-1);
}

