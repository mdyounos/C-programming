//Write a function to count the number of digits for a positive integer
#include<stdio.h>
int countDigits(int n);
int main()
{
    int num,digit;
    printf("Give a number: ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Input number is incorrect.");
        return 0;
    }
    digit=countDigits(num);
    printf("The number of digit is %d\n\n",digit);
    return 0;
}


int countDigits(int n)
{
    int count=0;
    while(n!=0)
    {
        count++;
        n/=10;
    }
    return count;
}
