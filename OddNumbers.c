#include <stdio.h>

int main()
{
int Input; 
int sum=0;
printf("Type in the Number that you want to find the odd numbers of lower or equall value : " );
scanf(" %d " , &Input);
int numberOfOddsFound = 1;
printf(" The odd numbers are : ");
for (int i = 1; numberOfOddsFound <= Input ; ++i)
{
   	
   //test if the number is odd
    if (i % 2 == 1 )
    {
    	/* odds */
		printf(" %d " , i );
        sum = sum+i; //suming up the odds
        ++numberOfOddsFound;  // counting the odds

    }
   //display in the screen - printf
   
}
printf(" \n The total of all the odds added up is : %d \n",sum );
}