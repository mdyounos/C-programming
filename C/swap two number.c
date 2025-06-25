#include<stdio.h>
int main()
{
    int x=10, y=5;
    swap(&x, &y);
    printf("%d %d",x,y);
    return 0;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
