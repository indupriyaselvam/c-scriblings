/* Reverse a given string on the result string variable without using any library functions */

#include<stdio.h>
#include<string.h>
int main(){
	int i, k,j=0;
	char s[100], n[100];
	char temp;

	printf("Enter the name: ");
	scanf("%[^\n]", s);

	for(k = 0; s[k] != '\0'; k++);
	printf("String length: %d\n", k);

#if 0
	for(i=k-1; i>=0; i--){	
		n[j] = s[i];
		j++;
	}
	printf("Reversed value: %s\n", n);
#endif

	j = k - 1;

	for(i=0; i<k/2; i++) {
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
	}

	printf("Reversed value: %s\n", s);
	return 0;
}


