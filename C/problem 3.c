//Write a function Reverse that takes an integer value from user and returns the number with its digits reversed.
#include<stdio.h>
int reverse(int num)
{
    int rem,sum=0;
      while(num!=0)
    {
        rem=num%10;
        num=num/10;
        sum=sum*10+rem;
    }
    return sum;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("The reverse number is: %d\n\n",reverse(num));
    return 0;
}
