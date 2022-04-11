struct abc {
 int d;
 int m;
};

int main(){

	struct abc a = {2,4};
	struct abc *ptr = &a;

	printf("%d %d", ptr->d, ptr->m);

}
