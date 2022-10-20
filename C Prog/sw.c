#include<stdio.h>
main(){
	int a,b,c;
/*	char ch;
	scanf("%c",&ch);*/
	
	scanf("%d%d",&a,&b);
	fflush(stdin);
	char ch;
	scanf("%c",&ch);

	switch(ch){
		case '+':
			c=a+b;
			printf("%d",c);
			break;
		case '-':
			c=a-b;
			printf("%d",c);
			break;
		default:
			printf("Enter right choice");
		
			
	}
}
