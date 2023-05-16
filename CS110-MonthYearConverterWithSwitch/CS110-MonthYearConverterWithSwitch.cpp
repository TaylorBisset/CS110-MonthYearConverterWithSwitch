#include <iostream>

using namespace std;

int main()
{
	cout << "Please input what month you are checking? ";
	int month = 1;
	cin >> month;
	cout << endl;

	switch (month)
	{
	case 1:
		printf("January has 31 days.\n");
			break;

	case 2:
		printf("What year are you checking? ");
		int yearToCheck = 2000;
		cin >> yearToCheck;

		if (yearToCheck % 400 == 0.0)
		{
			cout << endl << "In the year " << yearToCheck << ", February has 29 days.\n";
		}

		else if (yearToCheck % 4 == 0.0 and yearToCheck % 100 != 0.0)
		{
			cout << endl << "In the year " << yearToCheck << ", February has 29 days.\n";
		}

		else
		{
			cout << endl << "In the year " << yearToCheck << ", February has 28 days.\n";
		}
		break;

	}
	cout << endl;
}
