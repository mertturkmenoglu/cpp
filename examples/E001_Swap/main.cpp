/**
 * Example:
 * Demonstration of swap function
 * in standard library for arrays.
 *
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 */

#include <bits/stdc++.h>

int main() {
	// Create two arrays
	int a1[] = { 1,2,3,4,5 };
	int a2[] = { 5,4,3,2,1 };

	// Print first states
	for(int i=0; i<5; i++) {
		printf("A[%d]: %d\tB[%d]: %d\n", i+1, a1[i], i+1, a2[i]);
	}

	printf("**********\n");

	// Swap two arrays
	std::swap(a1, a2);

	// Print second states
	for(int i=0; i<5; i++)
		printf("A[%d]: %d\tB[%d]: %d\n", i+1, a1[i], i+1, a2[i]);

	return 0;
}
