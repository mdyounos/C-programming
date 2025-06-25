#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p, *table;
    int size;
    printf("Size of table?");
    scanf("%d",&size);
    if((table = (int *)malloc(sizeof(int))) == NULL)
    {
        printf("No space available \n");
        exit(1);
    }
    printf("\nAddress of the first byte is %u", table);
    printf("\nInput table values:\n");
    for(p=table; p<table+size; p++)
    {
        scanf("%d",p);
    }
    for(p = table; p<table+size; p++)
        printf("%d is stored at address %u \n",*p,p);
}
