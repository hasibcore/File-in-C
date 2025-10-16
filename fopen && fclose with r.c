//file write (r) using function with fopen and fclose
#include<stdio.h>
int main()
{
    FILE *file_ptr;
    file_ptr=fopen("file.text","r");
    if(file_ptr==NULL)
    {
        printf("Failed to create a file ");
        return 1;
    }
    printf("File created successfully");
    fclose(file_ptr);
    return 0;
}

