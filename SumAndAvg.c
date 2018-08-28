#include <stdio.h>
    
int main()
{ 
	int sum = 0;
	int n = 0; 
   float avg = 0;;

 printf("Input Value of 10 numbers: \n");
 
for (int i=1 ; i<=10 ; i++)
{
        scanf("%d",&n);

	    sum = sum + n; 
      printf("Number %d is: %d \n",i, n);

     
      
}

      avg = sum / 10.0; 


printf (" \n All the numbers together equals : \n");
printf("%d \n",sum);
printf ("The avg of this sum is %f ", avg );

printf("\n");

return 0;
}