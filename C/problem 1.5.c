//Write a function extractOddDigits() which extracts the odd digits from a positive number n, and combines the odd digits sequentially into a new number.
#include<stdio.h>
#include<math.h>

long extractOddDigits();
int main()
{
    long num;
    int odd;
    printf("Give a number: ");
    scanf("%ld",&num);
    if(num<=0)
    {
        printf("Input number is invalid.\n\n");
        return 0;
    }
    odd=extractOddDigits(num);
    printf("OddDigits number is %d\n\n",odd);
}

long extractOddDigits(long n)
{
    int rem,sum=0,count=0,flag=0;
    while(n!=0)
    {

        rem=n%10;
        n/=10;
        if(rem%2!=0)
        {
            sum=sum+rem*pow(10,count);
            count++;
            flag=1;
        }
    }
    if(flag==0)
    {
        return -1;
    }
    return sum;

}
