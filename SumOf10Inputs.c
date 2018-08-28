#include <stdio.h>

int main() {
int input=0;
int sum=0;
int count=10;
printf(" Please type in 10 numbers: \n");
for (int i = 0; i < count; ++i)
{
	printf(" Number %d :\n", i);
    scanf ("%d", &input);
    sum = sum + input;

}




printf("The answer of all the inputs sumed up is: %d \n",sum );



}