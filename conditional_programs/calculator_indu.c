#include<stdio.h>

int main()
{
	int a, b, c;
	char O;

	printf("Enter the value: ");
	scanf("%d", &a);
	fflush(stdin);
	printf("Enter the value: ");
	scanf("%d", &b);
	fflush(stdin);
	printf("Operation: ");
	scanf("%c", &O);
	fflush(stdin);

	if (O == '+'){
		c = a+b;
		printf("The addition value is %d\n", c);
	} else if (O == '-'){
		c = a-b;
		printf("The sub value is %d\n", c);
	} else if (O == '*'){
		c = a*b;
		printf("The multiply value is %d\n", c);
	} else if (O == '/'){
		c = a/b;
		printf("The div value is %d\n", c);
	} else {
		printf("Only +, -, *, / operations can be performed with this calculator!\n");
	}

	return 0;
}
