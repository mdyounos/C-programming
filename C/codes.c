#include<stdio.h>
#define PI 3.1415
int fun2(int c);
int a=5;
float area(float x)
    {
        return PI*x*x;
    }

float perameter(float x)
{
    return 2*PI*x;
}

int main()
{
    float r;
    printf("Give radius value r: ");
    scanf("%f",&r);
    printf("area= %.2f\n",area(r));
    printf("perameter: %.2f\n",perameter(r));
}
