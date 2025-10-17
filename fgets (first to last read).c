#include <stdio.h>

int main()
{
    FILE *hash;
    hash = fopen("adiba.txt", "r");
    if (hash == NULL)
    {
        printf("Not Found\n");
    }
    else
    {
        char ch[31];
        while (fgets(ch,sizeof(ch),hash)!=NULL)
        {
            printf("%s\n", ch);
        }
        fclose(hash);
    }
    return 0;
}
