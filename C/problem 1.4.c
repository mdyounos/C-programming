//Write the function position () which returns the position of the first appearance of a specified digit in a positive number n.
#include<stdio.h>
int position(int num, int digit);

void main()
{
    int num,digit,count;
    printf("Give a number: ");
    scanf("%d",&num);
    printf("Give a digit: ");
    scanf("%d",&digit);

    count=position(num,digit);
    printf("The position is %d",count);
    return 0;
}


int position(int num, int digit)
{
    int count=0,rem,flag=0;

    while(num!=0)
    {
        count++;
        rem=num%10;
        if(rem==digit)
        {
            return count;
            flag=1;
        }

        num=num/10;
    }
    if(flag!=1)
    {
        return -1;
    }

}
