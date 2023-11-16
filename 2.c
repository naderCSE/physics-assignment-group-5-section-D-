// physics problem 2
#include<stdio.h>
#include<math.h>
int main(){
	double lamda,theta,a ;
	printf("Enter wavelenth = ");
	scanf("%lf",&lamda);
	printf("Enter thetha = ");
	scanf(" %lf",&theta);
	lamda *=1e-9;
	theta = theta *(3.1416/180.0);
	a=(lamda)/sin(theta);
	printf(" the ratio a= %0.2e\n ",a);
	return 0;}