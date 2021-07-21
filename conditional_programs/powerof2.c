#include<stdio.h>
int main(){
	int n, i;
	printf("Enter the value: ");
	scanf("%d", &n);
	i=n;

	if((n!=0)&&((n&(n-1))==0))
		printf("%d is a power of 2\n",i);
	else 
		printf("%d is not a power of 2\n",i);
	return 0;
}
