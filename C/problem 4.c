//Write a recursive function Fibonacci that calculates the nth Fibonacci number.
#include<stdio.h>
int Fibonacci(int n);
int main()
{
    int n;
    printf("n= ");
    scanf("%d",&n);
    printf("%dth Fibonacci number is %d\n\n",n,Fibonacci(n-1));
    return 0;
}

int Fibonacci(int n)
{
    if(n==0||n==1)
        return n;
    else
        return Fibonacci(n-1) + Fibonacci(n-2);

}
//0 1 1 2 3 5
//1 2 3 4 5 6
