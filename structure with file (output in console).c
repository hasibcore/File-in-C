#include<stdio.h>
struct student
{
char name[30];
int roll;
float marks[3];
};
int main()
{
    struct student std[5];
    FILE *exam;
    exam=fopen("abcd.txt","r");
    if(exam==NULL)
    {
        printf("Not found");
    }
    else
    {
        for(int i=0;i<5;i++)
        {
            fscanf(exam,"%s:",std[i].name);
            //fgets(std[i].name,sizeof(std[i].name),exam);
            fscanf(exam,"%d",&std[i].roll);
            for(int j=0;j<3;j++)
            {
                fscanf(exam,"%f",&std[i].marks[j]);
            }

        }

        fclose(exam);
        for(int i=0;i<5;i++)
        {
            printf("\nName : %s \n",std[i].name);
            printf("Roll : %d ",std[i].roll);
            printf("\nMarks of the subjects : \n");
          for(int j=0;j<3;j++)
          {
              printf("%f   ",std[i].marks[j]);
          }
        }
    }
}
