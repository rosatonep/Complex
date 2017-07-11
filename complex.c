/* Name: Project5_complex.c
   Purpose: Adds, subtracts, or multiplies complex numbers.
   Author: Philip Rosatone */

#include <stdio.h>

void read_numbers(double *r1, double *i1, double *r2, double *i2);
void add(double r1, double i1, double r2, double i2, double *r3, double *i3);
void subtract(double r1, double i1, double r2, double i2, double *r3, double *i3);
void multiply(double r1, double i1, double r2, double i2, double *r3, double *i3);
void print_complex(double r3, double i3); 

int main(void)
{
	/* initializes variables */
	double r1, r2, r3, i1, i2, i3;
	int option;
	
	printf("Complex Number Arithmetic Program: \n\n");
	for(;;)
	{
		/* Displays the menu */
		printf("1. Add two complex numbers\n");
		printf("2. Subtract two complex numbers\n");
		printf("3. Multiply two complex numbers\n");
		printf("4. Quit\n\n");

		/* Prints the options and stores the option chosen by the user */
		printf("Choose an option (1 - 4): ");
		scanf("%d", &option);
		switch(option){
			case 1:
				read_numbers(&r1, &i1, &r2, &i2);
				add(r1, i1, r2, i2, &r3, &i3);
				print_complex(r3, i3);
				break;
			case 2:
				read_numbers(&r1, &i1, &r2, &i2);
				subtract(r1, i1, r2, i2, &r3, &i3);
				print_complex(r3, i3);
				break;
			case 3:
				read_numbers(&r1, &i1, &r2, &i2);
				multiply(r1, i1, r2, i2, &r3, &i3);
				print_complex(r3, i3);
				break;
			case 4:
				return 0;
			default:
				printf("Invalid option. Choose an option (1-4):\n");
		}
	}
	return 0;
}

void read_numbers(double *r1, double *i1, double *r2, double *i2)
{
	/* Asks user to enter the two components of the two numbers and stores the values in r1, i1, r2, i2 */
	printf("Please enter the real component of the first number: ");
	scanf("%lf", r1);
	printf("Please enter the imaginary component of the first number: ");
	scanf("%lf", i1);
	printf("Please enter the real component of the second number: ");
	scanf("%lf", r2);
	printf("Please enter the imaginary component of the second number: ");
	scanf("%lf", i2);
}
void add(double r1, double i1, double r2, double i2, double *r3, double *i3)
{
	/* Adds the two complex numbers */
	*r3 = r1 + r2;
	*i3 = i1 + i2;
}
void subtract(double r1, double i1, double r2, double i2, double *r3, double *i3)
{
	/* Subtracts the two complex numbers */
	*r3 = r1 - r2;
	*i3 = i1 - i2;
}
void multiply(double r1, double i1, double r2, double i2, double *r3, double *i3)
{
	/* Multiplies the two complex numbers */
	*r3 = (r1 * r2) - (i1 * i2);
	*i3 = (r1 * i2) + (i1 * r2);
}
void print_complex(double r3, double i3)
{
	/* Displays the results */
	if(i3 >= 0)
	{
	   printf("The operation yields %.3f + %.3fi\n\n", r3, i3);
	}
	else
	{	
	   printf("The operation yields %.3f %.3fi\n\n", r3, i3);
	}
}

