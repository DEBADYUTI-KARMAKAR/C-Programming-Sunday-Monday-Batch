#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr = NULL;

    //char str[50];
    int n;
    ptr = fopen("file.txt","r");
    fscanf(ptr,"%d",&n);
    printf("%d",n);
    fclose(ptr);
    return 0;
}
