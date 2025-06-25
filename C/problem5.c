//A file named beforesort.txt contains a series of integer number. Write a
//program to read these numbers and after sorting these numbers in ascending
//order, save in a new file named aftersort.txt.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *bs;
    FILE *as;

    int before[10]={10,25,48,75,46,35,25,12,13,15};

    bs=fopen("beforesort.txt","w");
    for(int i=0; i<10; i++)
    {
        fprintf(bs,"%d ",before[i]);
    }
    fclose(bs);

    bs=fopen("beforesort.txt","r");
    as=fopen("aftersort.txt","w");
    //For reading
    for(int i=0; i<10; i++)
        {
            fscanf(bs,"%d ", &before[i]);
        }
    //For ascending
    for(int i=0;i<10;i++)
        {

            for(int j=i+1;j<10;j++){
                int smaller=before[i];
                if(smaller>before[j])
                {
                    int temp=before[i];
                    before[i]=before[j];
                    before[j]=temp;
                }

            }

        }
     //For saving
    for(int i=0;i<10;i++)
        {
            fprintf(as,"%d ",before[i]);
        }
    return 0;
}
