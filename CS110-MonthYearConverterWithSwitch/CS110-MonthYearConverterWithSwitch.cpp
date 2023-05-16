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
	}
}
