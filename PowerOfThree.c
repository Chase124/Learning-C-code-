 #include <stdio.h>
    
int main()
{

int Imput [5]; //input array
int Output [5]; // output array



// get the numbers from the user
printf("Input Value of 5 numbers: \n");
for (int i=0; i<5; i++)
{

scanf("%d",&Imput[i]);
printf("Number %d is: %d \n",i+1, Imput[i]);

Output[i] = Imput[i] * Imput[i] * Imput[i]; //calculate the cube all the inputs using loops

}
for (int j = 0; j < 5; ++j)
{
	
// print everything 
printf ("The answer of number %d is  %d \n", j ,Output[j]);

}
















}