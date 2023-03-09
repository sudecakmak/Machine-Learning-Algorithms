#include <iostream>

using namespace std;

string Result(int Sex, int Status, int Kid);
void Print(int Sex, int Status, int Kid);

int main()
{
	int sex;
	int status;
	int kid;

	while (1)
	{
		cout << "Enter number: (1-Female, 2-Man)" << endl;
		cin >> sex;

		cout << "Enter number: (1-Single, 2-Married, 3-Divorced)" << endl;
		cin >> status;

		cout << "Enter number: (1-Has kid, 2-No kid)" << endl;
		cin >> kid;

		cout << endl << "ideal Customer = " << Result(sex, status, kid);
		cout << endl << "--------------" << endl;
		Print(sex, status, kid);
		cout << "\n\n\n";
	}

}

string Result(int Sex, int Status, int Kid) {

	string idealCustomer;

	if (Kid == 1)
	{
		idealCustomer = "Yes";
	}
	else if (Kid == 2)
	{
		if (Status == 2)
			idealCustomer = "No";
		else if (Status == 1)
		{
			if (Sex == 1)
				idealCustomer = "Yes";
			else if (Sex == 2)
				idealCustomer = "No";
		}
		else if (Status == 3)
		{
			idealCustomer = "Yes";
		}
	}

	return idealCustomer;
}

void Print(int Sex, int Status, int Kid) {

	if (Sex == 1)
		cout << "Female" << endl;
	else if (Sex == 2)
		cout << "Male" << endl;

	if (Status == 1)
		cout << "Single" << endl;
	else if (Status == 2)
		cout << "Married" << endl;
	else if (Status == 3)
		cout << "Divorced" << endl;

	if (Kid == 1)
		cout << "Has kid" << endl;
	else if (Kid == 2)
		cout << "No kid" << endl;
}

