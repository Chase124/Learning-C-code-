#include <stdio.h>

void MyPrintFunctionTimesX(char mySecondChar[], int times)
{

	for (int j = 0; j < times; ++j)
	{
	
	printf(" %d %c \n", j+1, *mySecondChar );

	}
}

void square(int number)
{

int answer =0;

answer = number * number;

printf("%d\n", answer );

}


int main()
{

int input = 0;
printf(" Type in the number that you want squared \n");
scanf ("%d", &input);

square(input);





//MyPrintFunctionTimesX("T",3);


//MyPrintFunctionTimesX("C",100);

//MyPrintFunctionTimesX("M",10);





return 0;

}
