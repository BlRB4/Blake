#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//  19990998 


// f = c*(9/5) + 32. 


int main()
{
	
	float arr[10][4];
	float brr[10][4];
	float crr[10][4];
	int i, j;
	float a;
	
	
	FILE *fpi;
	FILE *fpo;
	
	fpi = fopen("Sensor_Record.txt","r");
	fpo = fopen("Sensor_Record_modified.txt","w");
	while(fscanf(fpi,"%f%f%f%f", &arr[i][0],&arr[i][1],&arr[i][2],&arr[i][3])!=EOF)
	{
		++i;
	}


	fclose(fpi);
	printf("This is the original Sensor_Record in Celsius scale with Glitches.\n");
	for(i=0; i<10; i++)
	{
			printf("%f\t%f\t%f\t%f\n", arr[i][0],arr[i][1], arr[i][2], arr[i][3] );
	}
	
	for(i=0;i<10;i++)
	{
		if(arr[i][0]>0)
		{
			printf("Positive value detected, %f, @ Row %d || Column 0.\n", arr[i][0],i);
			arr[i][0]=-1*arr[i][0];
			printf("\nHas now become: %f\n", arr[i][0]);
		}													
		if(arr[i][1]>0)
		{
			printf("Positive value detected, %f, @ Row %d || Column 1.\n",arr[i][1],i);
			arr[i][1]=-1*arr[i][1];
			printf("\nHas now become: %f\n", arr[i][1]);
		}
		if(arr[i][2]>0)
		{
			printf("Positive value detected, %f,  @ Row %d || Column 2.\n",arr[i][2],i);
			arr[i][2]=-1*arr[i][2];
			printf("\nHas now become: %f\n", arr[i][2]);
		}
		if(arr[i][3]>0)
		{
			printf("Positive value detected, %f, @ Row %d || Column 3.\n",brr[i][3],i);
			arr[i][3]=-1*arr[i][3];
			printf("\nHas now become: %f\n", arr[i][3]);
		}
	}
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<4;j++)
		{
			brr[i][j]= ((arr[i][j]*(1.8)) + 32);
		}
	}
	printf("\nThis is the modified Sensor_Record in Fahernheit scale (Glitches Adjusted).\n");
	for (i=0;i<10;i++)
	{
		printf("%f\t%f\t%f\t%f\n", brr[i][0],brr[i][1], brr[i][2], brr[i][3] );
		fprintf(fpo,"%f\t%f\t%f\t%f|\t|%f\t%f\t%f\t%f\n",arr[i][0],arr[i][1], arr[i][2], arr[i][3],brr[i][0],brr[i][1], brr[i][2], brr[i][3]);
	}
	printf("The result is saved in Sensor_Record_modified.txt.");
	fclose(fpo);
	getchar();
	return 0;
	
	
}















































