#include<stdio.h>
int main()
{
    int largest_index, largest_number=0,n=5,i;
    for(i=n;i>=1;i--)
    {
        int number=i,sequence=1;
        while(number!=1)
        {
            if(number%2==0) number=number/2;
            else number=3*number+1;
            sequence++;
            if(largest_number<=sequence)
            {
                largest_index=i;
                largest_number=sequence;
            }
        }
    }
    printf("maximum %d sequence for number %d",largest_number,largest_index);
    return 0;
}
