#include <stdio.h>
int main(){
	int age, salary;
	printf("Enter your Salary: ");
	scanf("%d", &salary);
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if (salary>=40000 and age>=25) {
		printf("The loan is approved!");
	}
	else {
		printf("Sorry! But your loan is not approved!!!");
	};
	return 0;
}
