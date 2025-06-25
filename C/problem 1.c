#include<stdio.h>

void mulTest()
    {
        int a,b;
        printf("Enter two number: ");
        scanf("%d%d",&a,&b);
        printf("Multiplication of these two numbers is %d\n\n",(a*b));
    }

void divide()
{
    int num1, num2, rem, quo, count=0;
    printf("Give Two Number: ");
    scanf("%d%d",&num1,&num2);
    while(num1>=num2)
    {
        num1=num1-num2;
        count++;
    }
    printf("The quotient is %d & remainder is %d\n\n",count,num1);
}

void countDigits()
{
    int num, count=0;
    printf("Give a number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        count++;
        num=num/10;
    }
    printf("The number of digits is %d\n\n",count);
}

void position()
{
    int num,count=0,rem,digit,flag=0;
    printf("Give a number: ");
    scanf("%d",&num);
    printf("Give a digit: ");
    scanf("%d",&digit);
    while(num!=0)
    {
        count++;
        rem=num%10;
        if(rem==digit)
        {
            printf("The position is %d of the digit %d\n\n",count,digit);
            flag=1;
        }

        num=num/10;
    }
    if(flag!=1)
    {
        printf("No have the digit.\n\n");
    }

}

void extractOddDigits()
{
    int num, rem;
    printf("Give a number: ");
    scanf("%d",&num);

    printf("Here have these Odd numbers: ");
    while(num!=0)
    {
        rem=num%10;

        if(rem%2!=0)
        {
            printf("%d ",rem);
        }
        num/=10;
    }
    printf("\n\n");
}


void main(){
    int choice;
    do {
        printf("Perform the following functions:\n");
        printf ("1: multiplication test\n");
        printf ("2: quotient using division by subtraction\n");
        printf ("3: count the number of digits\n");
        printf ("4: position of a digit\n");
        printf ("5: extract all odd digits\n");
        printf ("6: quit\n");
        scanf("%d", &choice);
        switch (choice) {
                case 1: mulTest();
                        break;
                case 2: divide();
                        break;
                case 3: countDigits();
                        break;
                case 4: position();
                        break;
                case 5: extractOddDigits();
                        break;
                case 6: printf("Program terminating.\n\n");
                        }
        } while (choice < 6);
    }

