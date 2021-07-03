/*Find the sum & average of the 10 number, get the input from the user*/

#include<stdio.h>
int main()
{
	int a,i,sum = 0;
	
	for(a=0;a<10;a++){
		printf("Enter the value %d: ",a+1);
		scanf("%d", &i);
		sum += i;
		fflush(stdin);
	}
	printf("Sum: %d\n", sum);
	printf("Average: %d\n", sum/10);
	return 0;
}

