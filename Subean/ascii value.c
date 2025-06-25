#include<stdio.h>
int main()
{
    char small;
    printf("Enter a small letter: ");
        small=getchar();
    printf("The capital letter is: %c\n",small-32);
}
