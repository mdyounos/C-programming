#include<stdio.h>
int main()
{
   char choice;
   scanf("%c",&choice);
   switch(choice)
   {
   case 'a'||'A':
//   case 'A':
    printf("Hello A");
   case 'b':
    printf("Hello B");
   default:
    printf("NO");
   }
}
