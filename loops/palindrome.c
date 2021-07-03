/*Find the given number is PALINDROME OR NOT*/

#include<stdio.h>
int main(){
	int n, o, rem, rev = 0;
	printf("Enter the value: ");
	scanf("%d", &n);
	o = n;

	while(n!=0){
		rem = n % 10;
		rev = rev * 10 + rem;
		n/=10;
	}

	printf("The Reversed Value: %d\n", rev);

	if(o==rev)
	printf("This is a palindrome!\n");
   	else 
	printf("This is not a palindrome!\n");
}
