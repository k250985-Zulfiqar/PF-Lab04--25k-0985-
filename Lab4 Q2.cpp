#include <stdio.h>
int main(){
	int age;
	printf("Please enter your age: ");
	scanf("%d", &age);
	if (age<12) {
		printf("The ticket price is Rs 200");
	}
	else if(age>=12 and age<=18){
		printf("The ticket price is Rs 300");
	}
	else if(age>18 and age<=60){
		printf("The ticket price is Rs 500");
	}
	else{
		printf("The ticket price is Rs 250");
	};

	return 0;
}
