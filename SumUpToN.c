#include <stdio.h>
    
int main()
{ 
	int sum = 0;
	int n = 0; 
   

 printf("Input Value of terms : ");
 scanf("%d",&n);

 printf("The first %d natural numbers are:\n", n);
	for (int i=1 ; i<=n ; i++)
	{

	    sum = sum + i; 
      printf("%d ",i);

      
     }

printf (" \n All the numbers together equals : \n");
printf("%d ",sum);


printf("\n");

return 0;
}