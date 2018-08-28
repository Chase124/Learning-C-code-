#include <stdio.h>

int main() 
{

int input;



printf("Type in the number of lines for the pyrimid \n");

scanf( " %d", &input);

input = input*2;
int Counter = 1;
for (int i = 1; i < input; ++i)
{ 

	
	if (i % 2 == 1)
	{


		for (int k = input-i; k >=0; k--)
		{
			printf(" ");
		}


		for (int j = 1; j <= i; ++j)
	    { 


	    	if (input < Counter)
	    	{
	    		break;
	    	}

	    	printf(" * "); 
	    	Counter++; 

	    } 
	 	printf("\n"); 

	}
	

  
}


}


