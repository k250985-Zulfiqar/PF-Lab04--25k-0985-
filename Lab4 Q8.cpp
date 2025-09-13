#include <stdio.h>
int main(){
	int temp;
	printf("Enter Temperature:");
	scanf("%d",&temp);
	if (temp>30){
		printf("Hot Day");
	
	}
	else{
		printf("Pleasant Day");
	};
	return 0;
}
