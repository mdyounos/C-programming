#include<stdio.h>
#include<math.h>
int main()
{
//    int a,b,temp;
//    scanf("%d%d",&a,&b);
//    while(b!=0)
//    {
//        temp=a%b;
//        a=b;
//        b=temp;
//    }
//    printf("Gcd: %d",a);

//Write a program that reads a character from the user and then uses a switch statement to
//achieve what the following if statement does.

//    char ch;
//    scanf("%c",&ch);
//    switch (ch)
//    {
//    case 'a':
//        printf("action movie fan.");
//        break;
//    case 'A':
//        printf("action movie fan.");
//        break;
//    case 'c':
//        printf("comedy movie fan.");
//        break;
//    case 'C':
//        printf("comedy movie fan.");
//        break;
//    case 'd':
//        printf("Drama movie fan.");
//        break;
//    case 'D':
//        printf("Drama movie fan.");
//    default:
//        printf("Invalid choice");
//        break;
//
//    }

//Problem 02

//    char ch;
//    do
//    {
//      scanf("%c%*c",&ch);
//        if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
//            printf("Vowel\n");
//        else if(ch>='0'&&ch<='9')
//            printf("Digit\n");
//        else
//            printf("Consonant\n");
//
//    }
//    while(ch!='E');

//Problem 04

//int sum=0,num,r;
//printf("Enter a number: ");
//scanf("%d",&num);
//while(num!=0)
//{
//    r=num%10;
//    sum=sum+r;
//    num=num/10;
//}
//printf("sum of digit numbers %d",sum);
//int i,j,n,s;
//scanf("%d%d",&s,&n);
//for(i=s;i<=n;i++)
//{
//    int flag=0;
//    for(j=2;j<i;j++)
//    {
//        if(i%j==0)
//        {
//            flag=1;
//            break;
//        }
//
//    }
//    if(flag==0)
//            printf("%d ",i);
//}

//Problem 08

//    int num,sum=0;
//    scanf("%d",&num);
//    while(num!=0)
//    {
//        if(num%2==1)
//        {
//            sum++;
//        }
//        num=num/2;
//    }
//    printf("%d bits set.",sum);

//Problem 07

//int n, row, col;
//scanf("%d",&n);
//for(row=1;row<=n;row++)
//{
//    if(row%2==1)
//    {
//        for(col=1;col<=row;col++)
//        {
//            if(col%2==1)
//                printf("0");
//            else
//                printf("1");
//        }
//    }
//    else
//        for(col=1;col<=row;col++)
//        {
//            if(col%2==1)
//                printf("1");
//            else
//                printf("0");
//        }
//printf("\n");
//}

//Problem 06

//    int x,y;
//    scanf("%d%d",&x,&y);
//    if(x>0&&y>0||x==0&&y>0||x>0&&y==0)
//        printf("quadrant 1");
//    else if(x<0&&y>0||x<0&&y==0)
//        printf("quadrant 2");
//    else if(x<0&&y<0||x==0&&y<0)
//        printf("quadrant 3");
//    else if(x>0&&y<0)
//        printf("quadrant 4");

//Problem 05

//    int i,f;
//    for(i=1;i<=10;i++)
//    {
//        f=factorial(i);
//        printf("%d!=%d\n",i,f);
//    }

//Problem 04

//    int a, b, c ,D;
//    float x1,x2;
//    scanf("%d%d%d",&a,&b,&c);
//    D=b*b-4*a*c;
//    if(a==0&&b==0)
//    {
//        printf("No solution");
//    }
//    else if(D==0)
//    {
//        x1=-b/(2*a);
//        printf("x= %f",x1);
//    }
//    else if(D<0)
//    {
//        printf("No Real root here");
//    }
//    else
//    {
//        x1=(-b+sqrt(D))/(2*a);
//        x2=(-b-sqrt(D))/(2*a);
//        printf("x1= %f\nx2= %f",x1,x2);
//    }
}

//int factorial(int n)
//{
//    return (n==0)?1:n*factorial(n-1);
//}

