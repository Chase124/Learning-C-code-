#include <stdio.h>

int main() {
int input; 
printf("Type in a number \n");
scanf ("%d",&input );
int Counter = 1;

for (int i = 1; i <= input; ++i)
{

    for (int j = 1; j <= i; ++j)
    {
    if (input < Counter)
    {
    	break;
    }

    printf(" %d ", Counter++); 

    } 
 printf("\n"); 


}

}