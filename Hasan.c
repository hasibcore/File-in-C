#include<stdio.h>
int main()
{
    FILE *mango;
   mango= fopen("hasib.text","r");
    if(mango==NULL)
    {
        printf("NOT EXIST");
    }
    else
    {
        printf("Exist\n");
        char str[]={"HASIB"};
        fputs(str,mango);

char cha;
while(!feof(mango))
{
    cha=fgetc(mango);
    printf("%c",cha);

}
fclose(mango);
    }
}
