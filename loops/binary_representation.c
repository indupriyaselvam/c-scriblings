/*Binary Representation of the given integer*/

#include<stdio.h>
int main() {
	int n, rem, b=0, p=1;

	printf("Enter the value: ");
	scanf("%d", &n);

	while(n){
		rem = n % 2;
		n /= 2;
		b = b + (rem * p);
		p *= 10;
	}
	
	printf("The binary representation: %d\n", b);
	return 0;
}
