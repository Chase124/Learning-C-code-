#include <stdio.h>

int main()
{

 int Number;
 int Answer;

  printf("Input up to the table number starting from 1 : ") ;  
  scanf("%d " , &Number );

for (int j = 1; j <= 10 ; ++j)
{
	
	for (int i = 1; i <= Number; ++i)
	{
  	// calculate the number
	Answer = i * j; 
	//diplay the table
	printf(" %d X %d  = %d, ",i , j,  Answer );
  
	}
//break the line
	printf("\n");

}

}