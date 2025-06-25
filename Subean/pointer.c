#include<stdio.h>
int main()
{
    int x=10;
    int *p;

    p=&x;

    printf("%d\n",x);
    *p=20;
    printf("%d\n",x);
    printf("Address of x: %p\n",&x);
    printf("value of x: %p\n",p);
}
