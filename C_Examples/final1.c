#include <stdio.h>


void det_Calc();

float arr[3][3];
	int i, j;
	float detA;
	float detAp1;
	float detAp2;
	float detAp3;
int main()
{
	
	
	
	printf("Please enter your values 'a' through 'i':\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf(" %f", &arr[i][j]);
		}
	}
	/* - - - -
	a=00,b=01,c=02,d=10,e=11,f=12,g=20,h=21,i=22;
	- - - - */
	
	det_Calc();
	
	printf("\n");
	printf("Given the values of a through i respectively:\n%f %f %f %f %f %f %f %f %f\nYour determinant (A) is equal to: %f.", arr[0][0],arr[0][1],arr[0][2],arr[1][0],arr[1][1],arr[1][2],arr[2][0],arr[2][1],arr[2][2], detA);
	getchar(); return 0;
	
	
	
	
	
}

void det_Calc()
{
	detAp1 = ((arr[1][1] * arr[2][2])-(arr[1][2]*arr[2][1]));
	detAp2 = ((arr[1][0]*arr[2][2])-(arr[1][2]*arr[2][0]));
	detAp3 = ((arr[1][0]*arr[2][1])-(arr[1][1]*arr[2][0]));
	detA = (arr[0][0]*detAp1 - arr[0][1]*detAp2 + arr[0][2]*detAp3);
	
	
	
}

















































