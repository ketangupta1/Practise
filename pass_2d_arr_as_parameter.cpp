#include <iostream>
using namespace std;
#define M 4
#define N 5

void assign(int **A)
{
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			A[i][j] = i + j;
		}
	}
}

// Program to pass 2D array as a function parameter in C++
int main()
{
	// dynamically create array of pointers of size M
	int** A = new int*[M];

	// dynamically allocate memory of size N for each row
	for (int i = 0; i < M; i++)
		A[i] = new int[N];

	// assign values to allocated memory
	assign(A);

	// print the 2D array

	// deallocate memory using delete[] operator
	for (int i = 0; i < M; i++)
		delete[] A[i];

	delete[] A;

	return 0;
}
