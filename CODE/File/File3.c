#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr = NULL;
    char str[50]="Computer";
    ptr = fopen("file1.txt","a");
   
    fprintf(ptr,"%s",str);
    fclose(ptr);
    
    return 0;
}
