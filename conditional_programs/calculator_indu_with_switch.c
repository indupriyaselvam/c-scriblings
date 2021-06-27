#include<stdio.h>

int main()
{
	int a, b;
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

	switch (O) {
		case '+':
		printf("The addition value is %d\n", a+b);
		break;		/* break is used to exit from switch and used to exit from loop */
		case '-':
		printf("The sub value is %d\n", a-b);
		break;
		case '*':
		printf("The multiply value is %d\n", a*b);
		break;
		case '/':
		printf("The div value is %d\n", a/b);
		break;
		default:
		printf("Only +, -, *, / operations can be performed with this calculator!\n");
	}

	return 0;
}
