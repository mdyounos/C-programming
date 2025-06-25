#include<stdio.h>
#define PI 3.1415
void area_perameter(float x,float *p_a, float *p_p)
{
    *p_a= PI*x*x;
    *p_p= 2*PI*x;
}
int main()
{
    float r, a, p;
    printf("Enter radius r: ");
    scanf("%f",&r);
    area_perameter(r,&a,&p);
    printf("The area is: %f\n",a);
    printf("The perimeter is: %f\n",p);
    return 0;
}
