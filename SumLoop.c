#include <stdio.h>
    
int main()
{ 
	int sum = 0; 
   


 printf("The first 10 natural numbers are:\n");
	for (int i=1 ; i<=10 ; i++)
	{

	    sum = sum + i; 
      printf("%d ",i);

      
     }

printf (" \n All the numbers together equals : \n");
printf("%d ",sum);


printf("\n");

return 0;
}