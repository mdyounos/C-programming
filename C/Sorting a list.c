#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char city[][20] = {"Dhaka","Rangpur","Rajshahi","Sylhet","Comilla","Jessor","Gazipur"};
    char temp[20];
    int i,j,count;
    count=sizeof(city)/sizeof(city[0]);
    for(i=0;i<count;i++)
    {
        for(j=1;j<count;j++)
        {
            if(strcmp(city[j-1],city[j])>0)
            {
                strcpy(temp,city[j-1]);
                strcpy(city[j-1],city[j]);
                strcpy(city[j],temp);
            }
        }
    }
    printf("Sorted the list: \n");
    for(i=0; i<count; i++)
    {
        printf("%s\n",city[i]);
    }
    return 0;
}
