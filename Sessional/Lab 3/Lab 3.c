#include<stdio.h>
int main()
{
//    int num1,num,d,sum=0;
//    scanf("%d",&num);
//
//        num1=num;
//
//        while(num!=0)
//    {
//        d=num%10;
//        sum=sum*10+d;
//        num=num/10;
//    }
//    if(num1==sum)
//    {
//        printf("palindrome");
//    }
//    else
//        printf("not palindrome");
//int n,i;
//scanf("%d",&n);
//for(i=1;i<=n;i++)
//{
//  printf("%d ",fibo(i));
//}
int n,i,j,k[10];
scanf("%d",&n);
for(;n>=1;n--)
{
    i=n;
    j=1;
    while(i!=1)
{
    if(i%2==0)
    {
        i=i/2;
    }
    else
    {
        i=3*i+1;
    }
    j++;
}

}
printf("maximum %d sequences for number %d\n",j,n);

//int row, col,n,d;
//scanf("%d",&n);
//d=65;
//for(row=1;row<=n;row++)
//{
//
//    for(col=1;col<=row;col++)
//    {
//        printf("%c%c",d,d);
//        d++;
//        if(d%2==1)
//    {
//        d=d-2;
//    }
//    }{
//
//
//    printf("\n");
//}

}
//int fibo(int n)
//{
//    if(n<=1) return n;
//    return fibo(n-1)+fibo(n-2);
//}
