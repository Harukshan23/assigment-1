#include<stdio.h>
#define PI 3.14

int main(){
	float radius,area;
	printf("Enter the radius :");
	scanf("%f",&radius);

	
	area=PI*radius*radius;
	printf("The area is :%.2f",area);
	return 0;
	
}
