/*Write a program to store n students details
  1) it should display the details
  2) it should give a student details with the given roll number
  3) it should sort the student details according to roll number
  4) it should reverse display the Student details
  5)it should display the Student details for the given name, note that it should display all the student whose name matches*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student{
	long int rollno;
	char name[50];
	int age;
};

void display(struct student s2[]){
	int i;
	for(i=0; i<10; i++){
		printf("Student%d: ", i+1);
		printf("%ld\t", s2[i].rollno);
		printf("%s\t", s2[i].name);
		printf("%d\n", s2[i].age);
	}
}

void searchrollnum(struct student s2[]){
	int i;
	long int n;

	printf("Search the roll number: \n");
	fflush(stdin);
	scanf("%ld", &n);

	for(i=0;i<10;i++){
		if(n==s2[i].rollno){
			printf("%ld\t",n);
			printf("%s\t", s2[i].name);
			printf("%d\n", s2[i].age);
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
void sort(struct student s2[]){
	int i,j;

	for(i=0; i<9;i++){
		for(j=i+1;j<10;j++){
			if(s2[j].rollno < s2[i].rollno){
				swap(&s2[j],&s2[i]);
			}
		}
	}
	printf("Sorted Order: \n");
	for(i=0;i<10;i++){
		printf("Student%d: ", i+1);
		printf("%ld\t", s2[i].rollno);
		printf("%s\t", s2[i].name);
		printf("%d\n", s2[i].age);
	}
}

void reverse(struct student s2[]){
	int i;
	for(i=9; i>=0; i--){
		printf("Student%d: ", i+1);
		printf("%ld\t", s2[i].rollno);
		printf("%s\t", s2[i].name);
		printf("%d\n", s2[i].age);
	}
}

void searchbyName(struct student s2[]){
	int i,result,f=0;
	char s3[30];

	printf("Search the name: \n");
	fflush(stdin);
	scanf("%s", s3);

	for(i=0;i<10;i++){
		result = strcmp(s3,s2[i].name);
		if(result==0){
			printf("%s\t",s3);
			printf("%ld\t", s2[i].rollno);
			printf("%d\n", s2[i].age);
			f++;
		}
	}
	if(f==0)		
			printf("The name does not exist in this log!\n");
}

int main(){
	int i;
	struct student s[10];
	char c, c1;

	for(i=0; i<10; i++){
		printf("Enter the details of Student%d: \n", i+1);

		printf("Roll number: ");
		fflush(stdin);
		scanf("%ld", &s[i].rollno);

		printf("Name: ");
		fflush(stdin);
		scanf("%s", s[i].name);

		printf("Age: ");
		fflush(stdin);
		scanf("%d", &s[i].age);
	}

	printf("\n");

	while(1){
		printf("Choose the below operations you want to perform\nDisplay(D)\nSearch the Roll number(R)\nSort(S)\nReverse the display(V)\nFind the student detail(N)\n");
		fflush(stdin);
		scanf("%c", &c);

		switch(c){
			case 'D':
				display(s);
				break;
			case 'R':
				searchrollnum(s);
				break;
			case 'S':
				sort(s);
				break;
			case 'V':
				reverse(s);
				break;
			case 'N':
				searchbyName(s);
				break;
			default:
				printf("The given option is not available\nPlease choose from the variables(D/ R/ S/ V/ N)\n");
				break;
		}

		printf("Press 'y' if you want to continue: \n");
		fflush(stdin);
		scanf("%c", &c1);

		if(c1 != 'y')
			break;
	}
	return 0;
}
