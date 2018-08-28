#include <stdio.h>

int main() {
	


int countForLines = 10;
for (int j = 0; j < countForLines; j++)
{
	for (int i = 0; i <= j; i++)
	{
		printf("* ");
	
	}
	printf("\n");

}



int countForLinesback = 0;
for (int j = countForLines+1; j > countForLinesback; j--)
{
	for (int i = 0; i < j; i++)
	{
		printf("* ");
	
	}
	printf("\n");

}

}