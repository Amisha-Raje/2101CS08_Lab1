#include <stdio.h>
 
int main()
{
	char Operator;
	float num1, num2, result = 0;
	//enter the operator for performing operations
	printf("\n Please Enter an Operator (+, -, *, /)  :  ");
  	scanf("%c", &Operator);
  	//options for various operations
  	switch(Operator)
  	{
		//+for adding 2 numbers
  		case '+':
        //enter 2 nos 
	    printf("\n Please Enter two Values for two Operations: num1 and num2  :  ");
  	    scanf("%f%f", &num1, &num2);
  			result = num1 + num2;
             //printing result
	    printf("\n The result of %f %c %f  = %f", num1, Operator, num2, result);
  			break;
             //-for subtracting 2 nos
        case '-':
        //enter 2 nos 
	    printf("\n Please Enter two Values for two Operations: num1 and num2  :  ");
  	    scanf("%f%f", &num1, &num2);
  			result = num1 - num2;
         //printing result
	     printf("\n The result of %f %c %f  = %f", num1, Operator, num2, result);
  			break;  
              //for multiplication
        case '*':
        //enter 2 nos 
	     printf("\n Please Enter two Values for two Operations: num1 and num2  :  ");
  	     scanf("%f%f", &num1, &num2);
  			result = num1 * num2;
             //printing result
	     printf("\n The result of %f %c %f  = %f", num1, Operator, num2, result);
  			break;	
             case '/':
        //enter 2 nos 
	     printf("\n Please Enter two Values for two Operations: num1 and num2  :  ");
  	     scanf("%f%f", &num1, &num2);
  			result = num1 / num2;
             //printing result
	      printf("\n The result of %f %c %f  = %f", num1, Operator, num2, result);
  			break;	
        			    			
	}
  
	return 0;
}