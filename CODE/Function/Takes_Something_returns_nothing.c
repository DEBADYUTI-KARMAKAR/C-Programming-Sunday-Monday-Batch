/*Takes Something , returns nothing*/

#include<stdio.h>

void add(int , int);

void main(){
	int x,y;
	printf("Enters two numbers:");
	scanf("%d%d",&x,&y);
	add(x,y);
}

void add(int a , int b){
	int c;
	c= a+b;
	printf("Sum is %d",c);
}
