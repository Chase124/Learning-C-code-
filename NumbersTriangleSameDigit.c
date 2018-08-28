#include <stdio.h>

int main() {
int input; 
printf("Type in a number \n");
scanf ("%d",&input );


for (int i = 1; i <= input; ++i)
{

    for (int j = 1; j <= i; ++j)
    {
    printf(" %d ",  i ); 

    }
 printf("\n"); 


}




}
