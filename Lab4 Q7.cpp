#include <stdio.h>


int main(){
	int key=1234;
	int pass;
	printf("Enter password: ");
	scanf("%d",&pass);
	if (pass==key){
		printf("Access Granted");
	}
	else {
		printf("Access Denied");
	};
	return 0;
	
}
