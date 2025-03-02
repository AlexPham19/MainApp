#include <iostream>
#include "MathLibrary.h"
using namespace std;

void MathResult(int result) {
	cout << "Math Result: " << result << endl;
}

int main() {
	cout << "Run MathLibrary with Callbacks..." << endl;
	// Since all the functions are integer values, it will round the results

	Add(10, 20, MathResult); 
	Multiply(5, 6, MathResult);
	Subtract(10, 20, MathResult);
	Divide(100, 20, MathResult);
	Modulo(5, 6, MathResult);
	Minimum(10 * 2, 5 * 6 - 1, MathResult);
	Maximum(10 * 2, 5 * 6 - 1, MathResult);

	return 0;
}

