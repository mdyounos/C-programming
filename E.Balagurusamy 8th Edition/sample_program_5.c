#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main()
{
    int angle;
    float x, y;

    printf("Angle   Cos(angle)\n\n");

    for (angle = 0; angle <= 180; angle += 10)
    {
        x = angle * (PI / 180); // Convert degrees to radians
        y = cos(x);
        printf("%4d    %10.4f\n", angle, y);
    }

    return 0;
}
