#include<stdio.h>

int main(){
	int *p1, *p2, a=127, b;
	
	char *p3 = &a;
	
	printf("size of pointer: %lu\n",sizeof(p1));
	
	p1 = &a;
	
	printf("size of pointer: %lu\n",sizeof(p1));
	
	p2 = &b;
	
	printf("Address of pointer1: %p\n", p1);
	printf("Address of pointer2: %p\n", p2);
	
	p1++;
	
	printf("Address of pointer1: %p\n", p1);
	printf("Address of pointer3: %d\n", *p3);

	return 0;
}
