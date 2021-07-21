#include<stdio.h>

int main(){
    
	char c;
	int a, s,l;
	unsigned int u;
	float f;
	double d;
	long double k;

	printf("Size of CHAR: %lu\n", sizeof(c));
	printf("Size of INTEGER: %lu\n", sizeof(a));
	printf("Size of UNSIGNED INTEGER: %lu\n", sizeof(u));
	printf("Size of SHORT INTEGER: %lu\n", sizeof(s));
	printf("Size of LONG INTEGER: %lu\n", sizeof(l));

	printf("Size of FLOAT: %lu\n", sizeof(f));
	printf("Size of DOUBLE: %lu\n", sizeof(d));
	printf("Size of LONG DOUBLE: %lu\n", sizeof(k));
	return 0;
}
