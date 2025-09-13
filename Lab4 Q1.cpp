#include <stdio.h>

int main(){
	float bill, final;
	printf("Please enter your bill: ");
	scanf("%f",&bill);
	if (bill>5000){
		final= (bill*90)/100;
		printf("Congrats! You got a discount, your final payable amount is %f", final);
	}
		
	else {
		printf("Sorry! you got no discount, your bill is %f",bill);
	}
		
	return 0;
}
