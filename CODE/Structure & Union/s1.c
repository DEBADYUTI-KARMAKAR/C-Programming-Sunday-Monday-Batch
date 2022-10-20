#include<stdio.h>
struct date{
	int d,m,y;
	char c;
};

main(){
	struct date today={ 
	13,6,2022,'M'
	};
	
	printf("%d\n",today.d);//13
	printf("%d\n",today.m);//6
	printf("%d\n",today.y);
	printf("%c\n",today.c);//M
	
}

