#include<stdio.h>

int main(){
	float num1,num2,ans;
	printf("Enter floating point no 1 :");
	scanf("%f",&num1);
	printf("Enter floating point no 2 :");
	scanf("%f",&num2);
	
	ans=num1*num2;
	printf("The answer is :%.2f",ans);
	return 0;
	
}
