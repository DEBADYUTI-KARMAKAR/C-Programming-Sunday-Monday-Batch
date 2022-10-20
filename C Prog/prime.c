#include<stdio.h>
main(){
	int num = 15,i;
	int isPrime = 1;///true
	for(i=2;i<=num-1;i++){
		if(num%i == 0){
			isPrime= 0;
			break;
			
		}
	}
	
	if(isPrime==0){
		printf("Not Prime");
	}else{
		printf("Prime");
	}
}
