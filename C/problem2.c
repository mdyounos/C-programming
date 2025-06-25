#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct cricket
{
	char player_name[20];
	char team_name[20];
	float avg_batting;
};

int main()
{
	struct cricket *p, *temp;
	p=(struct cricket*) malloc(3*sizeof(struct cricket));
	temp=(struct cricket*) malloc(3*sizeof(struct cricket));

	int i,j;
	for(i=0;i<3;i++)
	{
		printf("\nEnter PlayerName TeamName BattingAvg for player %d = ",i+1);
		scanf("%s %s %f",p[i].player_name,p[i].team_name,&p[i].avg_batting);
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(strcmp(p[j].team_name,p[j+1].team_name)>0)
			{
				*temp=p[j];
				p[j]=p[j+1];
				p[j+1]=*temp;
			}
		}
	}

	printf("\nAfter team wise sorting Player list is ");
	for(i=0;i<3;i++)
	{
		printf("\n%s %s %f",p[i].player_name,p[i].team_name,p[i].avg_batting);
	}
	return 0;
}

