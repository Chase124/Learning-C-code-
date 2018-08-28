#include <stdio.h>

int main() {

int input =0;
int answer =0;
 int multiplication =1;


 printf("Please type the number that you want the factorial for.");
 scanf(" %d ", &input);


for (int i = 1; i <= input ; ++i)
{
	
 multiplication = multiplication * i ;
 
 if ( i < input )
 {
 	printf("%d x ", i  );
 }
 else
 {
 	printf("%d", i  );
 }

}


printf(" \n The answer to this Factorial ( %d! ) = %d \n", input , multiplication );





}