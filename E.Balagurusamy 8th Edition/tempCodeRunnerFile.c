#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    printf("The value of %d power of %d: %d", a, b, pow(a, b));
    return 0;
}