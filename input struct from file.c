#include<stdio.h>
struct student
{
   char name[50];
   int roll;
   int sub[3];
};
int main()
{
    FILE *z;
    z=fopen("abc.txt","r");
    if(z==NULL)
    {
        printf("File could'nt found");
    }
    else{
    struct student st[5];
    int i,j;
    for(i=0;i<5;i++)
    {
        fscanf(z,"%s",st[i].name);
        fscanf(z,"%d",&st[i].roll);
        for(j=0;j<3;j++)
        {
            fscanf(z,"%d",&st[i].sub[j]);
        }
    }


    for(i=0;i<5;i++)
    {
        printf("Name: %s\n",st[i].name);
        printf("ROLL: %d\n",st[i].roll);
       printf("Marks of subject : \n");
        for(j=0;j<3;j++)
        {
            printf("%d ",st[i].sub[j]);
        }
        printf("\n");
    }
    }
    fclose(z);
}
