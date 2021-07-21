#include<stdio.h>
#include<math.h>

int i, o;

int armstrong(){
	int k,a,sum = 0;

	k = a = i;
	o = 0;

	while(k!=0){
		k/=10;
		++o;
	}
	printf("The order value: %d\n", o);

	while(a!=0){
		int p=0,j =a%10;
		p = pow(j,o);
		sum += p;
		a/=10;	
	}
	return sum;
}

int main(){
	int n;
	char Y = '\0';

	while(1) {
		printf("Enter the value: ");
		scanf("%d", &i);
		fflush(stdin);

		n = armstrong();

		if(n == i)
			printf("%d is an Armstrong number of order %d\n", n, o);
		else
			printf("%d is not an Armstrong number of order %d\n", n, o);

		printf("Press 'y' if you want to continue: ");
		scanf("%c", &Y);
		fflush(stdin);

		if(Y != 'y')
			break;
	}
	return 0;
}

