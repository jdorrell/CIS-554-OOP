#include <iostream>
#include "Worker.h"

using std::cout;
using std::cin;
using std::endl;

Worker::Worker()
{}

int type = 0;
int managersPay = 0;
int commissionedWorkersPay = 0;
int hourlyWorkersPay = 0;
int pieceWorkersPay = 0;

void Worker::getPay()
{
	while (type != -1)
	{
		//Prompt user for input
		cout << "Enter paycode (-1 to end) : ";
		cin >> type;

		double salary = 0;
		double hourlyRate = 0;
		int weeklyHours = 0;
		int grossWeeklysales = 0;
		int numberOfPieces = 0;
		double wagePerPiece = 0;

		//Evaluate input
		switch (type)
		{
			//Determine manager pay
			case 1 :
				cout << "Manager selected." << endl;
				cout << "Enter weekly salary : ";
				cin >> salary;
				//Validate user input
				if (salary < 0)
				{
					cout << "Cannot be negative!" << endl;
					break;
				}
				cout << "Managers pay is $" << salary << endl << endl;
				Worker::pay(type, salary);
				break;

			//Determine hourly worker pay
			case 2:
				cout << "Hourly worker selected." << endl;
				cout << "Enter hourly rate : ";
				cin >> hourlyRate;
				//Validate user input
				if (hourlyRate < 0)
				{
					cout << "Cannot be negative!" << endl;
					break;
				}
				cout << "Enter the total hours worked : ";
				cin >> weeklyHours;
				//Validate user input
				if (weeklyHours < 0)
				{
					cout << "Cannot be negative!" << endl;
					break;
				}
				//Check for overtime
				if(weeklyHours > 40)
				{
					//adjust rate for hours in excess of 40
					cout << "Workers pay is $" 
						 << (hourlyRate * (weeklyHours-(weeklyHours % 40))) + (weeklyHours % 40) * (hourlyRate * 1.5)
						 << endl << endl;
				}else cout << "Workers pay is $" << hourlyRate * weeklyHours << endl << endl;
				Worker::pay(type, hourlyRate * weeklyHours);
				break;

			//Determine commission worker pay
			case 3:
				cout << "Commission worker selected." << endl;
				cout << "Enter gross weekly sales : ";
				cin >> grossWeeklysales;
				//Validate user input
				if (grossWeeklysales < 0)
				{
					cout << "Cannot be negative!" << endl;
					break;
				}
				cout << "Commission Workers pay is $" << grossWeeklysales * .057 + 250 << endl << endl;
				Worker::pay(type, grossWeeklysales * .057 + 250);
				break;

			//Determine piece worker pay
			case 4:
				cout << "Pieceworker selected." << endl;
				cout << "Enter the number of pieces : ";
				cin >> numberOfPieces;
				//Validate user input
				if (numberOfPieces < 0)
				{
					cout << "Cannot be negative!" << endl;
					break;
				}
				cout << "Enter wage per piece : ";
				//Validate user input
				cin >> wagePerPiece;
				if (wagePerPiece < 0)
				{
					cout << "Cannot be negative!" << endl;
					break;
				}
				cout << "Pieceworkers pay is $" << numberOfPieces * wagePerPiece << endl << endl;
				Worker::pay(type, numberOfPieces * wagePerPiece);
				break;
		
			//View Results
			case -1:
				break;

			default:
				cout << "Invalid type!" << endl;
				break;

		}
	}

	//Display visual representation of total pay for all worker types
	//Will display on asterisk per $100 in total pay
	for (int i = 1; i < 5; i++)
	{
		switch (i)
		{
			case 1:
			{
				cout << "Managers" << "\t";
				int stars = managersPay;
				while(stars >= 100)
				{
					cout << "*";
					stars -= 100;
				}
				cout << endl;
				break;
			}
			case 2:
			{
				cout << "Hourly" << "\t\t";
				int stars = hourlyWorkersPay;
				while (stars >= 100)
				{
					cout << "*";
					stars -= 100;
				}
				cout << endl;
				break;
			}
			case 3:
			{
				cout << "Commission" << "\t";
				int stars = commissionedWorkersPay;
				while (stars >= 100)
				{
					cout << "*";
					stars -= 100;
				}
				cout << endl;
				break;
			}
			case 4:
			{
				cout << "Pieceworker" << "\t";
				int stars = pieceWorkersPay;
				while (stars >= 100)
				{
					cout << "*";
					stars -= 100;
				}
				cout << endl;
				break;
			}
		}
	}
}

void Worker::pay(int type, double pay) {
	//Updates total pay per worker type upon each valid user input
	switch (type)
	{
		case 1:
			managersPay += pay;
			break;
		case 2: 
			hourlyWorkersPay += pay;
			break;
		case 3:
			commissionedWorkersPay += pay;
			break;
		case 4:
			pieceWorkersPay += pay;
			break;
	}	
}