#include <iostream>


using namespace std;

int getSum(int a, int b)
{
	return (a + b);
}

int getSumFuncArg(int a, int b, int (*sum)(int a, int b))
{
	return (*sum)(a, b);
}

int main(int argc, char **argv)
{
	int a = 4;
	int b = 5;

	// Function pointer syntex = Function address
	int (*sum)(int a, int b) = &getSum;

	// Method 1
	cout << sum(a, b) << endl;

	// Method 2
	cout << (*sum)(a, b) << endl;

	// example demonstrating function as argument
	cout << getSumFuncArg(a, b, sum) << endl;

	return 0;
}
