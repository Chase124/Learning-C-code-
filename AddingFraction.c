#include <stdio.h>

int main()
{  	

float input =0.0;

float sum =0.0;


printf(" Type in the number \n");

scanf (  "%f" , &input);
 	
 for (int i = 1; i <= input; ++i) // 1/1 + 1/2 + 1/3
 {
   
  	sum = sum + 1.0f/i;
	//printf("With .0f = %f\n", 1.0f/i);
	//printf("with .0 = %f\n", 1.0/i);
	//printf("just the integer = %f\n", 1/i);
 }


printf("%f\n", sum);


}