//Write a program to swap the values of two numbers. Do this using call by reference method of
//function.
#include<stdio.h>
void swap(int *num1, int *num2);

int main()
{
    int num1,num2;

    printf("Give two numbers: ");
    scanf("%d%d",&num1,&num2);
    printf("Before swaping: %d %d\n\n",num1,num2);

    swap(&num1,&num2);

    printf("After swaping: %d %d\n\n",num1,num2);
}
void swap(int *num1, int *num2)
{
    int temp;

    temp=*num1;
    *num1=*num2;
    *num2=temp;
}
