#include<stdio.h>  
void sum(); 


 
void main()  
{  
     
    sum(); 
	//printf("hi"); 
	int i;
	for(i=1;i<5;i++){
		printf("hii\n");
	}
	sum();
}



  
void sum()  
{  
    int a,b,c;   
    printf("Enter two numbers:\n");  
    scanf("%d %d",&a,&b);   
    c=a+b;
    printf("Sum is:%d",c);
}  
