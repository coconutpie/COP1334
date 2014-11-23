#include <iostream>
#include <cstdlib>
#include <time.h>
#include <fstream>
#include <string>
using namespace std;

const int STUDENTS = 3;
const int ASSIGNMENTS = 4;


int main()
{
	int cop1334[STUDENTS][ASSIGNMENTS], total = 0;
	const int LOW = 70, HIGH = 100;

	srand(time(0));

	for (int i = 0; i < STUDENTS; i++)
	{
		for (int j = 0; j < ASSIGNMENTS; j++)
			cout << (cop1334[i][j] = rand() % (HIGH - LOW + 1) + LOW) << " ";

		cout << endl;
	}

	cout << endl << endl;

	for (int i = 0; i < STUDENTS; i++)
	{
		for (int j = 0; j < ASSIGNMENTS; j++)
			total += cop1334[i][j];

		cout << "Average for Student " << i << " = "
			<< static_cast<double> (total) / ASSIGNMENTS << endl;

		total = 0;
	}

	cout << endl << endl;

	for (int j = 0; j < ASSIGNMENTS; j++)
	{
		for (int i = 0; i < STUDENTS; i++)
		total += cop1334[i][j];

		cout << "Average for Assignment " << j << " = "
			<< static_cast<double> (total) / STUDENTS << endl;

		total = 0;
	}

	system("pause");
	return 0;
}
