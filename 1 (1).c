// This is the 1st problem of physics .
#include<stdio.h>
#include<math.h>
int main(){
	double lamda,theta,d,m ;
	printf("Enter wavelangth = ");
	scanf(" %lf",&lamda);
	printf("Enter thetha value = ");
	scanf(" %lf",&theta );
	printf("Enter double slit separation = ");
	scanf(" %lf",&d);
	lamda *= 1e-9; // convert to m 
	theta= theta *(3.1416/180); // convert to redious 
	d *= 1e-6; // convert to m 
	 m=( d*sin(theta))/lamda ;
	if(380e-9<=lamda && lamda<=750e-9 )
		printf(" %0.2lf-th order maxima \n",m );
      else 
	 printf(" Wavelenth out of range ,enter a valid value \n");	
	return 0;}