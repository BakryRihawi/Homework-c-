// Numbers ascending or descending order.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

	int ArraysNumber[400], i, j, ArraySize, tempo;
	char Sort_method;

	
	void OrderOfNumbers(int ArraySize,char Sort_method)
	{
		
		cout << "Enter the Array Number\n";
		for (int i = 0; i < ArraySize; i++)
		{
			cout << "ArraysNumber(" << i << ") = ";
			cin >> ArraysNumber[i];
		}
		for (int i = 0; i < ArraySize; i++) 

			for (int j = i + 1; j < ArraySize; j++){
				if (Sort_method == 'A') {
					if (ArraysNumber[i] > ArraysNumber[j]) {
						tempo = ArraysNumber[i];
						ArraysNumber[i] = ArraysNumber[j];
						ArraysNumber[j] = tempo;
					}
				}
				else if (Sort_method == 'D') {
					if (ArraysNumber[i] < ArraysNumber[j]) {
						tempo = ArraysNumber[i];
						ArraysNumber[i] = ArraysNumber[j];
						ArraysNumber[j] = tempo;
					}
				}

		}



		for (int i = 0; i < ArraySize; i++) {
			cout << ArraysNumber[i] << " ";
		}

	}




int main()
{
	
	
	OrderOfNumbers(5,'D');


}

