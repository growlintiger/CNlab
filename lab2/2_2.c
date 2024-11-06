#include <stdio.h>
#include <string.h>
struct dob 
	{
    	int day;
    	int month;
    	int year;
	};

struct student_info 
	{
    	int roll_no;
    	char name[50];
    	float CGPA;
    	struct dob age;
	};

void printStudentByValue(struct student_info student) 
	{
    	printf("Printing by value:\n");
    	printf("Roll No: %d\n", student.roll_no);
    	printf("Name: %s\n", student.name);
    	printf("CGPA: %.2f\n", student.CGPA);
    	printf("Date of Birth: %02d/%02d/%04d\n", student.age.day, student.age.month, student.age.year);
	}


void printStudentByAddress(struct student_info *student) 
	{
    	printf("Printing by address:\n");
    	printf("Roll No: %d\n", student->roll_no);
    	printf("Name: %s\n", student->name);
    	printf("CGPA: %.2f\n", student->CGPA);
    	printf("Date of Birth: %02d/%02d/%04d\n", student->age.day, student->age.month, student->age.year);
	}
	
int main() 
	{
    	struct student_info student;
    	student.roll_no = 1;
    	strcpy(student.name, "Alex");
    	student.CGPA = 9.75;
    	student.age.day = 23;
    	student.age.month = 8;
    	student.age.year = 2004;

    	printStudentByValue(student);

    	printStudentByAddress(&student);

    	return 0;
	}

