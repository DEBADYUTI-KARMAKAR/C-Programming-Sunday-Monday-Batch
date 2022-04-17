#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr = NULL;

    char str[50]="DK";
    
    ptr = fopen("file1.txt","w");
   
    fprintf(ptr,"%s",str);
    fclose(ptr);
    return 0;
}
