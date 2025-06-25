#include<stdio.h>
int main()
{
    struct distance{

    int ft,inch;

    };
    struct distance dis1;
    printf("Give a value in feet & inch: ");
    scanf("%d%d",&dis1.ft,&dis1.inch);
    struct distance dis2;
    printf("Give a value in feet & inch: ");
    scanf("%d%d",&dis2.ft,&dis2.inch);
    int inch=dis1.inch+dis2.inch;
    int feet=0;
      if(inch>=12)
      {
          inch=inch-12;
          feet++;
      }
      feet=feet+dis1.ft+dis2.ft;
      printf("%d feet %d inch",feet,inch);

}
