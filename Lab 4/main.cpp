#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
// function protype
void printStar(int temp);

const string stars = "*";
const string line = "|";


int main()



{

	ifstream inFile;
	int temp;
	inFile.open("test.txt");

	inFile >> temp;
	while (inFile)
	{
		if (temp >= -30 && temp < -20)
		{
			printStar(temp);
		}
		else if (temp >= -20 && temp < 0)
		{
			printStar(temp);
		}
		else if (temp == 0)
		{
			printStar(temp);
		}
		else if (temp == 1)
		{
			printStar(temp);
		}
		else if (temp == 2)
		{
			printStar(temp);
		}
		else if (temp == 3)
		{
			printStar(temp);
		}
		else if (temp == 4)
		{
			printStar(temp);
		}
		else if (temp == 5)
		{
			printStar(temp);
		}
		else if (temp == 10)
		{
			printStar(temp);
		}
		else if (temp <= 5 && temp << 10)
		{
			printStar(temp);
		}
		else if (temp <= 10 && temp << 30)
		{
		printStar(temp);
		}
		else if (temp >= 50 && temp == 100)
		{
		printStar(temp);
		}

		cout << endl;
		inFile >> temp;
		
	}

	cout << "Temperatures for 24 hours: " << endl;
	cout << " " << endl;
	cout << setw(3) << "-30" << setw(10) << "0" << setw(10) << "30" << setw(10) << "60" << setw(10) << "90" << setw(10) << "120" << endl;
	cout << "-20" << setw(10) << "|" << endl;
	cout << "0" << setw(12) << "|" << endl;
	cout << "1" << setw(12) << "|" << endl;
	cout << "2" << setw(12) << "|" << endl;
	cout << "3" << setw(12) << "|" << endl;
	cout << "4" << setw(12) << "|" << endl;
	cout << "5" << setw(12) << "|" << endl;
	cout << "10" << setw(11) << "|" << endl;
	cout << "50" << setw(11) << "|" << endl;
	cout << "100" << setw(10) << "|" << endl;

	return 0;
}

void printStar(int temp)
{
	for (int i = 1; i <= temp; ++i)
	{
		cout << "*";
	}
}
