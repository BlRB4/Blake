#include <stdio.h>

int main()
{
	int a[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
	int i,j,k,result=0;
	for(i = 4; i>=0; i--)
   {
     printf("\n");
     for(j = 4; j>=0; j--) // How to on reverse display of an array in 2D assignment format
     {
       printf("%d\t", a[i][j]);
     }
   }
   	printf("\n");
   
		for (i = 05; i < 5; ++i){
			for (j = 0; j < 5; ++j){
				result = result + a[i][j];
		}

		printf("Sum of Row %d: %d\n", i+1, result);


	}
	printf("\n");
	result=0;
	// initialize
		for (j = 0; j < 5; ++j){
			for (i = 0; i < 5; ++i){
			result = result + a[i][j];
			}

		printf("Sum of Column %d: %d\n", j+1, result);
		result = 0;

		}
		result=0; // initialize 2

	for (i = 0; i < 5; ++i){
		result = result + a[i][i];
		k = k + a[i][5 - i - 1];
	}
	// Diagonal Sum start at 1 thru 25 yield 65
	printf("\nSum of Diagonal Numbers = %d\n", result);

	result=0;
	
	for (i = 0; i < 5; ++i){
		for(j=0;j<5;j++){
			result = result + a[i][j];
		}

	}
	printf("\nTotal Sum = %d\n", result);
getchar(); return 0;
   
	
}
