#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float NumberOne, NumberTwo, result;
	int Operation;

	cout << "1.Addition\n";
	cout << "2.Subtraction\n";
	cout << "3.Multiplication\n";
	cout << "4.Division\n";
	cout << "5.powertion\n";
	cout << "6.AND(&)\n";
	cout << "7.OR()\n";
	cout << "8.NOT(!)\n";
	cout << "9.XOR(^)n\n";

	cout << "Enter Your Operation(1 - 9)" <<"\t";
	cin >> Operation;
	if (Operation >= 1 && Operation <= 9)
	{
		if (Operation == 1)
		{
			cout << "Enter the first number\t";
			cin >> NumberOne;
			cout << "Enter the second number\t";
			cin >> NumberTwo;
			result = NumberOne + NumberTwo;
			cout << "The result = " << result << endl;
		}
		else if (Operation == 2)
		{
			cout << "Enter the first number\t";
			cin >> NumberOne;
			cout << "Enter the second number\t";
			cin >> NumberTwo;
			result = NumberOne - NumberTwo;
			cout << "The result = " << result << endl;
		}
		else if (Operation == 3)
		{
			cout << "Enter the first number\t";
			cin >> NumberOne;
			cout << "Enter the second number\t";
			cin >> NumberTwo;
			result = NumberOne * NumberTwo;
			cout << "The result = " << result << endl;
		}
		else if (Operation == 4)
		{
			cout << "Enter the first number\t";
			cin >> NumberOne;
		NumberTwo: cout << "Enter the second number\t";
			cin >> NumberTwo;
			if (NumberTwo == 0)
			{
				cout << "You cannot divide by zero Please enter a second number other than zero\t";
				goto NumberTwo;
			}
			result = NumberOne / NumberTwo;
			cout << "The result = " << result << endl;
		}
		else if (Operation == 5)
		{
			cout << "Enter the first number\t";
			cin >> NumberOne;
			cout << "Enter the second number\t";
			cin >> NumberTwo;
			result = pow(NumberOne, NumberTwo);
			cout << "The result = " << result << endl;
		}
		else if (Operation == 6)
		{
			cout << "Enter the first number\t";
			cin >> NumberOne;
			cout << "Enter the second number\t";
			cin >> NumberTwo;
			result = (int(NumberOne) & int(NumberTwo));
			cout << "The result = " << result << endl;
		}
		else if (Operation == 7)
		{
			cout << "Enter the first number\t";
			cin >> NumberOne;
			cout << "Enter the second number\t";
			cin >> NumberTwo;
			result = (int(NumberOne) | int(NumberTwo));
			cout << "The result = " << result << endl;
		}
		else if (Operation == 8)
		{
			cout << "Enter the number\t";
			cin >> NumberOne;
			result = (!NumberOne);
			cout << "The result = " << result << endl;
		}
		else if (Operation == 9)
		{
			cout << "Enter the first number\t";
			cin >> NumberOne;
			cout << "Enter the second number\t";
			cin >> NumberTwo;
			result = (int(NumberOne) ^ int(NumberTwo));
			cout << "The result = " << result << endl;
		}
		else
		{
			cout << "Wrong Operation!";

		}
	}
	else
		return 0;
}