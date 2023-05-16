#include <iostream>

using namespace std;

int main()
{
	int month = 1;
	int yearToCheck = 2000;
	
	cout << "Please input what month you are checking? ";
	cin >> month;
	cout << endl;

	cout << "Please input what year you are checking? ";
	cin >> yearToCheck;
	cout << endl;

	switch (month)
	{
		case 1:
			cout << "January " << yearToCheck << ", has 31 days.\n";
			break;

		// February, checking for leap year.
		case 2:

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
			// End leap year logic.
			
		case 3:
			cout << "March " << yearToCheck << ", has 31 days.\n";
			break;

		case 4:
			cout << "April " << yearToCheck << ", has 30 days.\n";
			break;

		case 5:
			cout << "May " << yearToCheck << ", has 31 days.\n";
			break;

		case 6:
			cout << "June " << yearToCheck << ", has 30 days.\n";
			break;

		case 7:
			cout << "July " << yearToCheck << ", has 31 days.\n";
			break;

		case 8:
			cout << "August " << yearToCheck << ", has 31 days.\n";
			break;

		case 9:
			cout << "September " << yearToCheck << ", has 30 days.\n";
			break;

		case 10:
			cout << "October " << yearToCheck << ", has 31 days.\n";
			break;

		case 11:
			cout << "November " << yearToCheck << ", has 30 days.\n";
			break;

		case 12:
			cout << "December " << yearToCheck << ", has 31 days.\n";
			break;
/*
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << month << " " << yearToCheck << ", has 31 days.";
			break;

		case 4:
		case 6:
		case 9:
		case 11:
			cout << month << " " << yearToCheck << ", has 30 days.";
			break;

		case 2:
			if (yearToCheck % 400 == 0.0)
			{
				cout << endl << "February " << yearToCheck << ", has 29 days.\n";
			}

			else if (yearToCheck % 4 == 0.0 and yearToCheck % 100 != 0.0)
			{
				cout << endl << "February " << yearToCheck << ", has 29 days.\n";
			}

			else
			{
				cout << endl << "February " << yearToCheck << ", has 28 days.\n";
			}
			break;
*/
	}
	cout << endl;
}
