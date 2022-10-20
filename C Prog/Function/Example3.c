#include<stdio.h>
int Sum();

int main(){
	
	int a,b;
	
	scanf("%d%d",&a,&b);
	int result = Sum(a,b);
	printf("Sum is:%d",result);
}

int Sum(int a,int b){
	
	int c;
	c=a+b;
	return c;
	
}
