#include <stdio.h>
int main(){
	int attendance,marks;
	printf("Enter Attendance Percentage: ");
	scanf("%d", &attendance);
	printf("Enter Internal Marks: ");
	scanf("%d", &marks);
	
	if (attendance >=75 and marks>=40){
		printf("You are Eligible to attend exams.\n");
	}
	else{
		printf("Sorry! You are not Eligible to attend exams.\n");
	};
	return 0;
}
