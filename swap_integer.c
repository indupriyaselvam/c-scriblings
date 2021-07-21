/*Swap two given integers with and without using temporary variables*/

#include<stdio.h>
int main(){
	int a, b;
//	int temp;

	printf("Enter the value a: ");
	scanf("%d", &a);
	fflush(stdin);

	printf("Enter the value b: ");
	scanf("%d", &b);
	fflush(stdin);

//	temp = a;
//	a = b;
//	b = temp;

	a = a+b;
	b = a-b;
    a = a-b;

	printf("a value: %d\n", a);
	printf("b value: %d\n", b);
	return 0;
}
