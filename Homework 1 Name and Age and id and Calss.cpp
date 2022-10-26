


#include <iostream>

	using namespace std;

	int main()
	{
		string name;
		int age;
		int id;
		int cla;
		for (int i = 0; i < 5; i++) {
			cout << "Please enter the student's name: \t";
			cin >> name;
			cout << "Please enter the student's age: \t";
			cin >> age;
			cout << "Please enter the student's year: \t";
			cin >> cla;
			cout << "Please enter the student's university number: \t";
			cin >> id;
			cout << "Student's name is : " << name << "\n";
			cout << "Student's age is : " << age << "\n";
			cout << "Student's university number is : " << id << "\n";
			cout << "Student's year is : " << cla << "\n";
		}
		return 0;
	}

