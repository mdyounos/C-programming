//The function will ask a
student 05 (Five) multiplication questions one by one and checks the answers
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void mulTest ()
{
   int num1,num2, count=0,lower=1,upper=9,mul,temp,cnt=0;
    do {
        cnt++;

        srand(time(0));
        num1=(rand()%(upper-lower+1)+1);

        num2=(rand()%(upper-lower+1)+1);

        printf("How much is %d times %d?",num1,num2);
        scanf("%d",&mul);
        temp=num1*num2;
            if(temp==mul)
            {
                count++;
            }

        } while (cnt<5);
        printf("%d answers out of 5 are correct.\n\n",count);
}


void main()
{
    mulTest ();
}

