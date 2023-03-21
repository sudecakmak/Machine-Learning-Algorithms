#include <iostream>

using namespace std;

string Result(int Sex, int Status, string Age);
void Print(int Sex, int Status, string Age, int AgeNum);

int main()
{
	int sex;
	int status;
	int age;
	string st_age;

	while (1)
	{
		cout << "Enter age:" << endl;
		cin >> age;

		if (age > 30)
			st_age = "Big";
		else
			st_age = "Small or Equal";

		cout << "Enter number: (1-Female, 2-Male)" << endl;
		cin >> sex;

		cout << "Enter number: (1-Single, 2-Married, 3-Divorced)" << endl;
		cin >> status;

		cout << endl << "Ideal Customer = " << Result(sex, status, st_age);
		cout << endl << "--------------" << endl;
		Print(sex, status, st_age, age);
		cout << "\n\n\n";
	}

}

string Result(int Sex, int Status, string Age) {

	string idealCustomer;

	if (Age == "Small or Equal")
	{
		idealCustomer = "No";
	}
	else if (Age == "Big")
	{
		if (Status == 2)
			idealCustomer = "Yes";
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

void Print(int Sex, int Status, string Age, int AgeNum) {

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

	if (Age == "Small or Equal")
		cout << AgeNum << "\tSmall or Equal" << endl;
	else if (Age == "Big")
		cout << AgeNum << "\tBig" << endl;
}

