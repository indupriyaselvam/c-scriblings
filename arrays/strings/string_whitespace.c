/*Count the number of white spaces*/

#include<stdio.h>
int main(){
	int i,k=0;
	char s[100];

	printf("Enter the sentence: ");
	scanf("%[^\n]", s);
	
	for(i=0; s[i]!='\0'; i++){
		if(s[i] == ' '){
			k++;
		}
	}
	printf("The sum of White space: %d\n", k);
	return 0;
}
