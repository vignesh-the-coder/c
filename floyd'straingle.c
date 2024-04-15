// C program to Demonstrate Floyd's Triangle
// Using for loop
#include <stdio.h>
void floyd(int n)
{
	int i, j = 1;

	// Condition printing the number of element
	for (i = 1; i <= (n * (n + 1)) / 2; i++) {

		printf("%d ", i);

		// condition for row of number of element printing
		if (i == (j * (j + 1)) / 2) {
			printf("\n");
			j++;
		}
	}
}
int main() { floyd(6); }



// Floyd’s Triangle of natural numbers
// 1
// 2 3
// 4 5    6
// 7 8 9 10
// 11 12 13 14 15
// Floyd’s triangle of alphabets
// a
// b c
// d e f
// g h i j
// Star Floyd pattern
// *
// * *
// * * *
// * * * *