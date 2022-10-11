// C++ Program to demonstrate working of a function
#include <iostream>
using namespace std;

// Following function that takes two parameters 'x' and 'y'
// as input and returns max of two input numbers
int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

// main function that doesn't receive any parameter and
// returns integer
int main()
{
	int x = 10, y = 20;

	// Calling above function to find max of 'a' and 'b'
	int m = max(x, y);

	cout << "m is " << m;
	return 0;
}
