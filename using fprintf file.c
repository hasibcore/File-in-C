#include<stdio.h>
int main()
{
    FILE *lengra;
    lengra=fopen("tomala.xudi","a");
    if(lengra==NULL)
    {
        printf("Not found ");
    }
    else
        {
            char name[30],job[30];
            int age,salary;
        printf("Enter The Name : ");
    gets(name);
    printf("\nEnter The Job Institution : ");
    gets(job);
    printf("\nEnter The Age : ");
    scanf("%d",&age);
    printf("Enter The Salary : ");
    scanf("%d",&salary);
   fprintf(lengra,"\nName : ");
    fputs(name,lengra);
    fprintf(lengra,"\nAge is %d",age);
    fprintf(lengra,"\nSalary is %d",salary);
        fclose(lengra);
        }
}
