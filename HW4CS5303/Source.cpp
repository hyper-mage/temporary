#define _CRT_SECURE_NO_WARNINGS
//Matthew Lynn
//University of Texas at Dallas
//Course: CS 5303-001
//Instructor: Dr. Eric Becker
//Homework #4
//October 27, 2017
//Desktop PC running Windows 10
//Using Visual Studio Professional 2017
//Study Group: MaximumEffort

#include "Header.h"

//Prototype
void menu();
vector <int> fibonacci{};

int main(int argument_count, char ** argument_vector)
{
	menu();
}

void menu()
{
	vector<double> data = {};
	int option;
	bool done = false;

	while (!done)
	{
		cout << "========== MENU ========== \n";
		cout << "1. Test Containers \n";
		cout << "2. Test Pointers \n";
		cout << "3. Quit \n";
		cout << "========================== \n";
		cin >> option;
		switch (option)
		{
		case 1:
			//Test containers
			break;
		case 2:
			//Test Pointers
			break;
		case 3:
			cout << "Byeeeeeee \n";
			done = true;
			break;
		default:
			cout << "Invalid entry, please try again. \n";
			break;
		}//kill switch!
	}//while
}//menu



vector <int> fibonacci{}
{
	vector <int> values{ 0,1,1 };
	for (i = 3; i - 1 < 20; ++i)
	{
		values.push_back(values[i - 2] + values[i - 1]);
	}

}