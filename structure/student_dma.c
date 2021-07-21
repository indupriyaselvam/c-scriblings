/*Implement DMA in the student program*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student{
	long int rollno;
	char name[50];
	int age;
};

void display(struct student *s2,int n1){
	int i;

	for(i = 0; i < n1; i++){
		printf("Student%d: ", i + 1);
		printf("%ld\t", (s2+i)->rollno);
		printf("%s\t", (s2+i)->name);
		printf("%d\n", (s2+i)->age);
	}
}

void searchrollnum(struct student *s2,int n1){
	int i;
	long int n;

	printf("Search the roll number: \n");
	fflush(stdin);
	scanf("%ld", &n);

	for(i = 0; i < n1; i++){
		if(n == (s2+i)->rollno){
			printf("%ld\t",n);
			printf("%s\t", (s2+i)->name);
			printf("%d\n", (s2+i)->age);
			return;
		}
	}
	printf("This roll number does not exists!\n");
}

void swap(struct student *p1,struct student *p2){
	struct student temp;

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
void sort(struct student *s2,int n1){
	int i,j;

	for(i = 0; i < n1 - 1; i++){						
		for(j = i + 1; j < n1; j++){
			if((s2+j)->rollno < (s2+i)->rollno){
				swap((s2+j),(s2+i));
			}
		}
	}
	printf("Sorted Order: \n");
	for(i = 0; i < n1; i++){
		printf("Student%d: ", i + 1);
		printf("%ld\t", (s2+i)->rollno);
		printf("%s\t", (s2+i)->name);
		printf("%d\n", (s2+i)->age);
	}
}

void reverse(struct student *s2,int n1){
	int i;

	for(i = n1 - 1; i >= 0; i--){						//Try using recursive method
		printf("Student%d: ", i + 1);
		printf("%ld\t", (s2+i)->rollno);
		printf("%s\t", (s2+i)->name);
		printf("%d\n", (s2+i)->age);
	}
}

void searchbyName(struct student *s2,int n1){
	int i, f = 0;
	char s3[30];

	printf("Search the name: \n");
	fflush(stdin);
	scanf("%s", s3);

	for(i = 0; i < n1; i++){
		if(!(strcmp(s3,(s2+i)->name))){	
			printf("%s\t",s3);
			printf("%ld\t", (s2+i)->rollno);
			printf("%d\n", (s2+i)->age);
			f = 1;	
		}
	}
	if(f == 0)		
		printf("The name does not exist in this log!\n");
}

int inputvalidation(struct student *s2,int j){
	int i;

	for(i = j - 1; i >= 0; i--){
		if((s2+i)->rollno == (s2+j)->rollno){
			printf("Roll number already exists!\nPlease enter new roll no: ");
			return 1;
		}
	}
	return 0;
}

int main(){
	int i, n;
	struct student *s;
	char c;
//	char c1;

	printf("Enter the number of students: ");
	fflush(stdin);
	scanf("%d",&n);

	s = (struct student*)malloc(n*sizeof(struct student));

	for(i = 0; i < n; i++){
		printf("Enter the details of Student%d: \n", i + 1);

		printf("Roll number: ");
		do{
			fflush(stdin);
			scanf("%ld", &(s+i)->rollno);
		}while(inputvalidation(s,i));

		printf("Name: ");
		fflush(stdin);
		scanf("%s", (s+i)->name);

		printf("Age: ");
		fflush(stdin);
		scanf("%d", &(s+i)->age);
	}

	printf("\n");

	while(1){
		printf("Choose the below operations you want to perform\nDisplay(D)" \
				"\nSearch the Roll number(R)\nSort(S)\nReverse the display(V)" \
				"\nFind the student detail(N)\nExit the program(E)\n");	
		fflush(stdin);
		scanf("%c", &c);
		fflush(stdin);

		switch(c){
			case 'D':
				display(s,n);
				break;
			case 'R':
				searchrollnum(s,n);
				break;
			case 'S':
				sort(s,n);
				break;
			case 'V':
				reverse(s,n);
				break;
			case 'N':
				searchbyName(s,n);
				break;
			case 'E':
				goto exit;
			default:
				printf("The given option is not available!\nDisplay(D)" \
						"\nSearch the Roll number(R)\nSort(S)\nReverse the display(V)" \
						"\nFind the student detail(N)\nExit the program(E)" \
						"\nPlease choose from the variables(D/ R/ S/ V/ N)\n");
				break;
		}
#if 0
		printf("Press 'y' if you want to continue: \n");
		fflush(stdin);
		scanf("%c", &c1);

		if(c1 != 'y')
			break;
#endif
	}

exit:
	free(s);

	return 0;
}
