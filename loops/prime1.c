/*PRIME NUMBERS in an user given range*/

#include<stdio.h>
int main(){
	int a, b, t, i, f;
	printf("Enter start value: ");
	scanf("%d", &a);
	printf("Enter end value: ");
	scanf("%d", &b);

	if(a>b){
		t = a;
		a = b;
		b = t;
	}
	printf("Find prime numbers from the range: %d to %d\n",a,b);
	printf("The Prime numbers inbetween the above range: ");

	while(a<b){
		f = 0;
		if(a<=1){
			++a;
			continue;
		}
		for(i=2; i<=a/2; i++){
			if(a%i == 0){
				f = 1;
				break;
			}
		}
		if(f == 0)
		printf("%d ", a);
		++a;
	}
	printf("\n");
	return 0;
}

