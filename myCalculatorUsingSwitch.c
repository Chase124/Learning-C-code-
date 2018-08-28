#include <stdio.h>

int	main()
	{
		int firstNumber, secondNumber;
		char operation; 
		int result;
		printf(" Please enter the first integer value : ");

		scanf("%d\n", &firstNumber );
		printf(" Please enter the seconf integer value : ");
		scanf("%d\n", &secondNumber );
		printf(" Please enter the operator : ");
		scanf("%s\n", &operation );

	//	scanf("Please enter the second integer value : %d", &secondNumber );

	//	scanf("Please enter a operation :   %c", &operation );

        switch (operation)
        {
        	case '+': 
        		result = firstNumber + secondNumber;
        		break;
        	case '*' : 
        		result = firstNumber * secondNumber;
        		break;
	 		case '/':
	 			result = firstNumber / secondNumber;
	 			break;
 			case '-':
 				result = firstNumber - secondNumber;
 				break; 
             
		}


 		printf("The rusult of the sum is %d \n", result );







return 0;
	}