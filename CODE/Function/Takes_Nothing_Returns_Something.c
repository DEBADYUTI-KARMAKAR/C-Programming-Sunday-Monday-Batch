/*Takes Nothing ,Returns Something*/
#include<stdio.h>

int add(void);

void main(){
	int s;
	
	s=add();
	printf("Sum is:%d",s);
}

int add(){
	int a,b;
	printf("Enter two numers:");
	scanf("%d%d",&a,&b);
	int c = a+b;
	return c;
	
}
