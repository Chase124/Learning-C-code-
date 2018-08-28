#include <stdio.h>

int main()
{
int input =0;
int output =0;

printf (" Enter the times table number:" );
scanf("%d" , &input);


for (int i = 0; i < 13; ++i)
{
output = input * i ;	
printf("%d X %d = %d \n",input, i ,  output );

}







return 0;
}