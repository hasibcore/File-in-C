//using fputs,gets,fprints
#include<stdio.h>
int main()
{
    FILE *gaypartho;
    gaypartho=fopen("gay.txt","w");
    if(gaypartho==NULL)
    {
        printf("File not found ");
    }
    else
        {
             char name[50];
    printf("Enter the name : ");
    gets(name);
    fprintf(gaypartho,"The entered Name\n");
    fputs(name,gaypartho);
    fclose(gaypartho);

    }

}
