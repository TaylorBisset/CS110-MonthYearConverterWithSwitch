#include <iostream>

using namespace std;

int main()
{
	cout << "Please input what month you are checking? ";
	int month = 1;
	int yearToCheck = 2000;
	cin >> month;
	cout << endl;

	switch (month)
	{
	case 1:
		printf("January has 31 days.\n");
			break;

	case 2:
		printf("What year are you checking? ");

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

	case 3:
		printf("March has 31 days.\n");
		break;

	case 4:
		printf("April has 30 days.\n");
		break;

	case 5:
		printf("May has 31 days.\n");
		break;

	case 6:
		printf("June has 30 days.\n");
		break;

	case 7:
		printf("July has 31 days.\n");
		break;

	case 8:
		printf("August has 31 days.\n");
		break;

	case 9:
		printf("September has 30 days.\n");
		break;

	case 10:
		printf("October has 31 days.\n");
		break;

	case 11:
		printf("November has 30 days.\n");
		break;

	case 12:
		printf("January has 31 days.\n");
		break;

	}
	cout << endl;
}
