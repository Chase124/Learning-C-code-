#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int randomNumberFunction(){

srand((unsigned)time(NULL));

int r1 =0;
int r2 =0;


r1 = rand(); 
//printf ("[DEBUG] First random number - %d \n", r1);


return r1; 

}

int breakNumberIntoString(int number){

	/* count number of digits */
int c = 0; /* digit position */
int n = number;

while (n != 0)
{
    n /= 10;
    c++;
}

int numberArray[c];

c = 0;    
n = number;

/* extract each digit */
while (n != 0)
{
    numberArray[c] = n % 10;
    n /= 10;
    c++;
    
}

/*
for (int i = 0; i < c; ++i)
{
	printf ("[DEBUG] Array position %d Number - %d \n",i ,  numberArray[i]);
}

printf ("[DEBUG] The secret nuber is: %d \n", numberArray[c-1]);
*/
return numberArray[3];
}



int main()

{
int Number;

//create an array of numbers


int array [10];



	//randomly pick a number 

int randomBigNumber = randomNumberFunction();//srand(time() * clock()) % (10 - 0 + 1);
int randomNumber = breakNumberIntoString(randomBigNumber);
	
for (int i = 2; i > 0 ; i--)
{
	/* code */

	//ask the user to guess the number
	printf(" Type a number between 1 and 10\n");
	scanf ( "%d", &Number );

	

	// cheak if the number is correct 

	if (randomNumber == Number)
	{
		printf(" You win, you guessed the correct number  \n");

		break ;
	}

	else
	{
		printf (" That was incorrect you have %d more turn \n ",i-1);

		

		if (i==1)
		{
			printf ("They were both incorrect you lose, try again \n");
		}
	}
    


}  		


	// if right print you win if wrong repeat to give them one more try

//printf(" %d \n",randomNumber );














}