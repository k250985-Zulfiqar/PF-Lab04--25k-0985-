#include <stdio.h>
int main(){
	int balance,withdrawal,left;
	printf("Enter your Balance: ");
	scanf("%d",&balance);
	printf("Enter Withdrawal Amount: ");
	scanf("%d",&withdrawal);
	
	if (balance>withdrawal and withdrawal%500==0){
		left=balance-withdrawal;
		printf("Withdrawal Approved! \n");
		printf("Your remaining Balance is %d",left);
		
	}
	else {
		printf("Withdrawal Not Approved!\n");
	};
	return 0;
}
