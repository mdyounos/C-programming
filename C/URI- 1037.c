#include<stdio.h>
int main()
{
    float n;
    scanf("%f",&n);
    if(0<=n&&100>=n)
    {
        if(0<=n&&25>=n)
            printf("Intervalo [0,25]\n");
        else if(25<n&&50>=n)
            printf("Intervalo (25,50]\n");
        else if(50<n&&75>=n)
            printf("Intervalo (50,75]\n");
        else
            printf("Intervalo (75,100]\n");
    }
    else
        printf("Fora de intervalo\n");
    return 0;
}
