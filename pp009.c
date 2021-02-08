int iseven(int n){
	if(n%2==0)
		return 1;
	else
		return 0;
}
main(){
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	
	iseven(num) ? printf("%d is even",num) : printf("%d is odd",num);
}

