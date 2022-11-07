// Fibonacci Homework.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

unsigned int Fibonacci(unsigned int Number)
{

	if (Number == 0 || Number == 1)
		return Number;
	else
	{
		unsigned int Fibonaccii = Fibonacci(Number - 1) + Fibonacci(Number - 2);
		return Fibonaccii;
	}

}
int main()
{
	unsigned int NumberFibonacci = 0;
	cout << "Please Enter The NumberFibonacci: \t";
	cin >> NumberFibonacci;
	for (int i = 0; i < NumberFibonacci; i++)
	{
		cout << Fibonacci(i) << "\t";

	}


}

