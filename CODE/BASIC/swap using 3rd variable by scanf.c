#include<stdio.h>
main(){
	int a,b,c;
	printf("Enter onenumber for a:\n");
	scanf("%d",&a);
	printf("Enter one number for b:\n");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("a= %d\n",a);
	printf("b = %d\n",b);
}
