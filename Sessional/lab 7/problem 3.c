#include <stdio.h>
#define MAX 100

int main()
{
	char str1[MAX]={0};
	char str2[MAX]={0};

	int loop;	//loop counter
	int flag=1;

	char *pStr1=str1;
	char *pStr2=str2;

	printf("string 1: ");
	scanf("%[^\n]s",pStr1);
	printf("Enter string 2: ");
	getchar(); //read & ignore extra character
	scanf("%[^\n]s",pStr2);

	//print strings
	printf("string1: %s\nstring2: %s\n",pStr1,pStr2);

	//comparing strings
	for(loop=0; (*(pStr1+loop))!='\0'; loop++)
	{
		if(*(pStr1+loop) != *(pStr2+loop))
		{
			flag=0;
			break;
		}
	}

	if(flag)
		printf("Strings are same.\n");
	else
		printf("Strings are not same.\n");

	return 0;
}
