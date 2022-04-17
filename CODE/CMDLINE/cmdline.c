#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    printf("%d",argc);

    for ( i = 0; i < argc; i++)
    {
        
        printf("%s",argv[i]);
    }
    
    
    
    return 0;
}
