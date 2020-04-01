#include <stdio.h>
#include <math.h>
#include "pwrHead.h"

int a,b,i;
double d;
char c;

double math_T(double a, double b,double d);


int main()
{
	do{
	printf("This program will test header files and user defined functions via basic matm.\nEnter your values for a & b:\n");
	scanf("%d %d", &a,&b);

	printf("\nHere, a = %d, b = %d\n", a,b);
	
	
	add_Nums(a,b);

	sub_Nums(a,b);
	
	mult_Nums(a,b);
	
	div_Nums(a,b);
	
	printf("\n");

	math_T(a,b,d);
	
	printf("\n");
	
	printf("\nWould you like to run this program again? Enter Y or N:\n");
	scanf(" %c", &c);
	
	}while(c=='Y'||c=='y');
	
	if(c=='N'||c=='n')
	{
		printf("\nYou now ended program as you entered N/n.");
		return 0;
		
	}
	if(c!='Y'||c!='n'||c!='N'||c!='n')
	{
		printf("\nYou did not enter a Y or N.");
		
	}

	
	getchar();
	return 0;
}
	
double math_T(double a, double b, double d)
{
	
	
	
	
	d = pow(a,b);
	
	printf("When %0.1f is raised to power of %0.1f, we get %0.1f", a,b,d);
	
	
}













