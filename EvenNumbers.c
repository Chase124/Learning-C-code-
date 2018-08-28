#include <stdio.h>

int main()
{
int Input; 
int sum=0;
printf("Type in the Number that you want to find the even numbers of lower or equall value : " );
scanf(" %d " , &Input);
int numberOfEvensFound = 0;
printf(" The even numbers are : ");
for (int i = 1; numberOfEvensFound <= Input ; ++i)
{
   	
   //test if the number is even
    if (i % 2 == 0 )
    {
    	/* evens */
		printf(" %d " , i );
        sum = sum+i; //suming up the evens
        ++numberOfEvensFound;  // counting the evens

    }
   //display in the screen - printf
   
}
printf(" \n The total of all the evens added up is : %d \n",sum );
}