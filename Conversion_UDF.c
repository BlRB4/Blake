#include <stdio.h>
#include <math.h>

float conv=3.14;
float rad, deg;
char c,c2;


float big_Conversion();


int main()
{
	do{
	printf("Enter your degree value:\n");
	scanf(" %f", &deg);
	
	big_Conversion();
	
	printf("How would you like to solve?\nC for cosine, S for sine, T for tangent:\n");
	scanf(" %c", &c);
	
	if(c=='C'||c=='c')
	{
		printf("\nThe cosine value for degrees of %f, which in radians is %f, is %f.",deg,rad,cos(deg));
		
	}
	if(c=='S'||c=='s')
	{
		printf("\nThe sine value for degrees of %f, which in randians is %f, is %f.", deg, rad, sin(deg));
	
	}
	
	if(c=='T'||c=='t')
	{
		
		printf("The tangent value for degrees of %f, which in radians is %f, is %f.", deg, rad, tan(deg));
		
	}
	
	
	
	printf("\n\nWould you like to run some more numbers? Y or N:\n");
	scanf(" %c", &c2);
	
	}while(c2=='Y'||c2=='y');
	getchar(); return 0;
	
}



float big_Conversion()
{
	rad=(conv/180);
	return rad;
	
}








