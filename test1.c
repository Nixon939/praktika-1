#include <stdlib.h>
#include <stdio.h>
int main () {
		//Set birth year
	int birthYear = 2004;
		//Set test year
	int testYear = 2010;
		//Calculate age
	int age;
	age = testYear - birthYear;
	printf("Age of student %d in year %d\n", age,testYear);
	return 0;
}
