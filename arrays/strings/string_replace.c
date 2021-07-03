/*Replacing 'k' with 'i'*/ 

#include<stdio.h>
int main(){
	int i;
	char s[100];

	printf("Enter the sentence: ");
	scanf("%s", s);
	
	for(i=0; s[i]!='\0'; i++){
		if(s[i]=='k'){
			s[i] = 'i';
		}
	}
	printf("The edited line: %s\n", s);
	return 0;
}
