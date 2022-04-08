#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */				int n, LastDigit;                                                 

		 printf("%d Last digit of n is LastDigit\n", n);                   
                                                                                  
                if (LastDigit > 5)                                                
		{                                                                 
		   printf("%d and is greater than 5\n", n)                   
		}                                                                 
	        if (LastDigit == 0)                                                       
	        {                                                                     		   printf("%d and is 0\n", n)                                                
	        }      
		if (LastDigit < 6, LastDigit !=0)                                                 
		{                                                                                 
		printf("%d and is less than 6 and not 0\n", n)
		}			
					return (0);

}
