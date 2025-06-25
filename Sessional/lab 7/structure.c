#include<stdio.h>
#include<string.h>

int main()
{
    struct person{
    char name[20];
    char gender;
    int age;
    char address[20];
    };

    struct person student;

    strcpy(student.name,"Md Younos");
    student.gender='M';
    student.age=24;
    strcpy(student.address,"Cox's Bazar");

    printf("%s\t",student.name);
    printf("%c\t",student.gender);
    printf("%d\t",student.age);
    printf("%s\n",student.address);
}
