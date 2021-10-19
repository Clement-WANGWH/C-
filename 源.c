#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int maximum(int x, int y,int z);// function prototype
int main(void)
{
	int number1; // first integer entered by the user
	int number2;// second integer entered by the user
	int number3; // third integer entered by the user
	printf("%s ", "Enter three integers:");
	scanf("%c%d%d", &number1, &number2, &number3);
	// number1£¬number2 and number3 are arguments 
	//to the maximum function ca17
	printf("Maximum is : % d\n", maximum(number1, number2, number3));
}
	// Function maximum definition
	// x, y and z are parameters
	int maximum(int x, int y, int z)
	{
		int max = x; //assume x is 1argest

		if (y > max) {
			max = y;//iTy 15. arger LL
		}
		if (z > max) {
			// if zis 1arger than max,
			max = z;
		}// assign z to max
		return max;
	}// max is largest value
