/*Takes Something Returns Something*/
#include<stdio.h>

int add(int , int);

void main(){
	int s,x,y;
	printf("Enters two numbers:");
	scanf("%d%d",&x,&y);
	s=add(x,y);
	printf("Sum is %d",s);
}

int add(int a , int b){
	int c;
	c= a+b;
	return c;
}
