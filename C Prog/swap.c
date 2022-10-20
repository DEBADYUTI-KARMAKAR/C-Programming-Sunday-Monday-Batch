#include<stdio.h>
main(){
	int a,b;
	printf("Enter one number for a:\n");
	printf("enter one number for b:\n");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a = %d\n",a);
	printf("b = %d\n",b);
}
