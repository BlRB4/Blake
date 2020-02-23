// C program to generate random numbers 
#include <stdio.h> 
#include <stdlib.h> 
#include<time.h> 
  
// Driver program 
int main(void) 
{ 
    // This program will create different sequence of  
    // random numbers on every program run  
  	int i;	
    // Use current time as seed for random generator. This means run after run youll have different numbers
    srand(time(0)); 
  
    for(i = 0; i<5; i++) 
        printf(" %d ", rand()); 
  
    return 0; 
} 
