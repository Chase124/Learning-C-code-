#include <stdio.h>


int sum(int first, int second){   
 return first + second;   
}

void functionDivideColumn(int a[5][4] , int column)
{//function starts here 
a [0][column] = a [0][column-1] / 2;
a [1][column] = a [1][column-1] / 2;
a [2][column] = a [2][column-1] / 2;
a [3][column] = a [3][column-1] / 2;
a [4][column] = a [4][column-1] / 2;

}//fuction finishes here



int main() {
    int myarray[5][4] = {{1000,0,0,0},
    					{800,0,0,0},
    					{600,0,0,0},
    					{400,0,0,0},
    					{200,0,0,0}};
    //create a function that resceive an array and the column number and calculates the division in the next column 
    //you ca chage lineTo Desplay to deside witch lie i the array you whant it to be same with the colum
int lineToDisplay = 2;
int columnToDivide = 1;    
functionDivideColumn(myarray , columnToDivide);                                //-1 to get the index 
printf("The first number in myarray is %d it divided by 2 is %d  \n", myarray[lineToDisplay-1][0] , myarray[lineToDisplay-1][1]  );
int answer = sum(3000034034304,353464546456);
    
return 0;
}