#include<stdio.h>
main(){
	int a;
	printf("Enter number:");
	scanf("%d",&a);
	if(a%2 == 0){
		printf("Div by 2");
	}
	else if(a%3 == 0){
		printf("Div by 3");
	}
	else if(a%5 == 0){
		printf("Div by 5");
	}
	else{
		printf("Not Div by 2,3,5");
	
	}
	
}
