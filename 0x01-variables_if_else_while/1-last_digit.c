#include <stdio.h>

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

		int n, LastDigit;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

				printf("\n Last digit of %d is %d", n, LastDigit);					if (LastDigit > 5)
				{
					printf("\n and is greater than 5");
				}
				if (LastDigit == 0)
				{
					printf("\n and is 0");
				}
				if (LastDIgit < 6, !=0)
				{
					printf("\n and is less than 6 and not 0");


					return (0);

}
