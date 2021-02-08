#include "stdio.h"
#include "pp010.h"
main(){
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	
	iseven(num) ? printf("%d is even",num) : printf("%d is odd",num);
}


