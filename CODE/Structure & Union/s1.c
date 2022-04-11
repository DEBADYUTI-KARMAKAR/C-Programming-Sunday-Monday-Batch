struct date{
	int d,m,y;
	char c;
};

main(){
	struct date today={ 
	26,7,2021,'D'
	};
	
	printf("%d\n",today.d);
	printf("%d\n",today.m);
	
	printf("%c\n",today.c);
	
}

