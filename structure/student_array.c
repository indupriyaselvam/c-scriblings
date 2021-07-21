/*Get 10 students' roll no, name, age and display all of them*/

#include<stdio.h>

struct student{
	long int rollno;
	char name[50];
	int age;
};

void display(struct student s2[]){
	int i;
	for(i = 0; i < 10; i++){
		printf("Student%d: ", i + 1);
		printf("%ld\t", s2[i].rollno);
		printf("%s\t", s2[i].name);
		printf("%d\n", s2[i].age);
	}
}

int main(){
	int i;
	struct student s[10];

	for(i = 0; i < 10; i++){
		printf("Enter the details of Student%d: \n", i+1);

		printf("Roll number: ");
		scanf("%ld", &s[i].rollno);
		fflush(stdin);

		printf("Name: ");
		scanf("%s", s[i].name);
		fflush(stdin);

		printf("Age: ");
		scanf("%d", &s[i].age);
		fflush(stdin);
	}

	printf("\n");
	printf("***STUDENT DETAILS***\n");

	display(s);

	return 0;
}
