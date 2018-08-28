#include <stdio.h>

//sum
float sum(float number1, float number2)
{

	float answer =0.0f;

	answer = number1 + number2;

	//printf("%2.2f\n", answer );
return answer;
}

//sub
float sub(float number1, float number2)
{

	float answer =0.0f;
	

	answer = number1 - number2;

	//printf("%2.2f\n", answer );
return answer;
}

//mul
float mul(float number1, float number2)
{

	float answer =0.0f;

	answer = number1 * number2;

	// printf("%2.2f\n", answer );
return answer;
}

//div
float div(float number1, float number2)
{	

	float answer =0.0f;

	answer = number1 / number2;

	// printf(" %2.2f\n", answer );
return answer;
}

int main()
{


char operations;
float input1 = 0.0f;
float input2 = 0.0f;
float myNewReturnedAnswer=0.0;

printf(" Type in the first number \n");
scanf ("%f", &input1);

printf(" Type in the oporation \n");
scanf(" %c",&operations);




while (   ('+'!= operations) && ('-'!= operations) &&  ('*'!= operations)  && ('/'!= operations) )
{


	//if (   ('+'!= operations) && ('-'!= operations) &&  ('*'!= operations)  && ('/'!= operations)     )
	//{
	
	printf("There is no such operation available \n");


	printf(" Type in the oporation \n");
	scanf(" %c",&operations);
	 
	//}

}
printf(" Type in the second number \n");
scanf ("%f", &input2);

// 1 - You need a variable, same way as you have nr1 and nr2, to store the operator which will be inserted by the user using scanf() function. For that you have to decide which type you will require to store the operator symbol? int? float? char?

// 2 - Inside every "if brackets" you have to create some sort of "comparison" (<,>,==,!=) so the if statement can decide weather to:
// if ('operator_simbol' == variable_storing_the_operator) 
// {do something} 
// else 
// {do something else}



if ( '+' == operations )
{
	
	myNewReturnedAnswer = sum(input1,input2);

}
else{

	if ( '-' == operations )
	{
		
		myNewReturnedAnswer = sub(input1,input2);

	}else{

		if ( '*' == operations )
		{
			myNewReturnedAnswer = mul(input1, input2);


		}else{
			if ( '/' == operations )
			{
				myNewReturnedAnswer = div(input1, input2);

			
			}
		}
	}
}


printf("The answer is %2.2f\n", myNewReturnedAnswer  );



//sum(input1, input2);
//sub(input1, input2); 
//mul(input1, input2);
//div(input1, input2);




return 0;

}
