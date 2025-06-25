#include<stdio.h>
int main()
{
    int i;
    printf("All the prime numbers of 1 to 100: ");
    for(int i=2;i<=100;i++)
    {
        int flag = 1;
        for(int j = 2; j<= (i/2); j++)
        {
            if(i%j==0)
            {
                flag = 0;
                break;
            }
        }
        if(flag==1)
            printf("%d ",i);
    }
    printf("\n");
    return 0;
}
