#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter 1st number: ");
	scanf("%d",&a);
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	printf("Enter 3rd number: ");
	scanf("%d",&c);
	if (a<b) {
		if (b<c){
			printf("3rd Number %d is the largest",c);
		}
		else {
			printf("2nd Number %d is the largest",b);		
		};
	}
	else {
		printf("1st Number %d is the largest",a);
	};

	
	return 0;
}
