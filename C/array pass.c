#include<stdio.h>
void print(int a);

int main()
{
    int ary[6]={1,2,3,4,5,8};
    print(ary[1]);
}

void print(int a)
{
    printf("%d",a);
}
