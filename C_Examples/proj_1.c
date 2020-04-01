#include <stdio.h>
#include <math.h>
#include "diffeq.h"


void values_BiggerZero(float n1, float n2, float r1, float r2, float b, float c);
void values_Same(float n1, float n2, float n3, float b, float c);
void values_LessZero(float n1, float n2, float ap, float bt, float b, float c);


int main()
{
	
float b, c, n1, n2, r1, r2, n3, ap, bt;




	printf("From Equation:\nD^2y + by + c = 0\nEnter your desired values:\n");

	printf("Value for B: \n");
	scanf("%f", &b);
	
	printf("Value for C: \n");
	scanf("%f", &c); // Gather b & c
	
	printf("Enter initial condition Y(0)=\n");
	scanf("%f", &n1);
	printf("Enter initial condition Y'(0)=)\n");
	scanf("%f", &n2); /// ICs

	r1 = RE1(b,c);
	r2 = RE2(b,c);
	n3 = LONE(b);

	ap = FRE(b);
	bt = IM(b,c);

	values_Same(n1, n2, n3, b, c);
	values_BiggerZero(n1, n2, r1, r2, b, c);
	values_LessZero(n1, n2, ap, bt, b, c);



getchar();
return 0;
}

void values_BiggerZero(float n1, float n2, float r1, float r2, float b, float c) // LARGER THAN 0
{
	
float consa;
float consb;

if(b*b-4*c > 0)
{ 
	consb=(n2-(n1*r1))/(r2-r1);
	
	consa=n1-consb;
	printf("\n\n--> The differential equation becomes Y(t)=%0.1fe^(%0.1ft)+%0.1fe^(%0.1ft)\nAs t is larger than 0.", consa, r1, consb, r2);	
}
	
}

void values_Same(float n1, float n2, float n3, float b, float c) // EQUAL TO 0 
{
	
	float consa;
	float consb;
	
	if(b*b-4*c == 0)
	{
	
	consb = n2-(n3*n1);
	
	consa=n1;
	printf("\n\n-> The differential equation becomes Y(t)=(%0.1f+%0.1ft)e^(%0.1ft)\nAs t is equal to 0.", consa, consb, n3);			
	}

}

void values_LessZero(float n1, float n2, float ap, float bt, float b, float c) // LESS THAN 0
{
	
float consa, result, theta1, theta2;
float conv = 180 / (3.14); 

if(b*b - 4*c < 0){
	

result = (n2-ap*n1)/(-(bt)*(n1));
theta1 = atan(result)*conv; // >> Angle << 
theta2 = atan(result);
consa = n1/(cos(theta2));

printf("\n\n--> The differential equation becomes Y(t)=%0.1fe^(%0.1ft)cos(%0.1ft+(%0.1f))\nAs t is less than 0.", consa,ap,bt,theta1);
		
}	
		
}


