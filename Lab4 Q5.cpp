#include <stdio.h>
int main(){
	float num1, num2 ;
	float result;
	char sign;
	
	printf("Enter Number 1: ");
	scanf("%f", &num1);
	printf("Enter Number 2: ");
	scanf("%f", &num2);
	printf("Enter an Operator from the following to use:\n");
	printf("| + | - | * | / | \n");
	scanf(" %c", &sign);
	
	if (sign=='+') {
		result= num1+num2;
		printf("Answer: %f",result);
	}
	else if (sign=='-'){
		result= num1-num2;
		printf("Answer: %f",result);
	}
	else if (sign=='*'){
		result= num1*num2;
		printf("Answer: %f",result);
	}
	else if(sign=='/') {
		if (num2==0){
			printf("Division by zero not possible.....");
		}
		else {
			result= (float)num1/num2;
			printf("Answer: %f",result);
		};
	}
	else {
		printf("Invalid Operator!");
	};
	
	return 0;
	
}
