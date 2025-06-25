//Define a structure called person which contain person name, date of joining
//and salary. Using person, write a program to read information of a person
//from keyboard and save in a file called person.txt.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct person
    {
        char name[20];
        char date[20];
        int salary;
    };

    struct person info;
    printf("Name: ");
     fgets(info.name, sizeof(info.name), stdin);
     printf("Date of joining: ");
     fgets(info.date, sizeof(info.date), stdin);
     printf("Salary: ");
     scanf("%d", &info.salary);

      FILE *fp;
      fp=fopen("person.txt","w");

      fprintf(fp,"%s",info.name);
      fprintf(fp,"%s",info.date);
      fprintf(fp,"%d",info.salary);
      fclose(fp);

     puts(info.name);
     puts(info.date);
     printf("%d",info.salary);
     printf("\nok successfully write this data.");
     return 0;
}
