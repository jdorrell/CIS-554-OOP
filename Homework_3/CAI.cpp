#include <iostream>
#include <chrono>
#include <cstdlib>
#include <iomanip>
#include "CAI.h"

using std::cout;
using std::cin;
using std::endl;



int score = 0;
int retries = 0;

//Use time sice epoch to seed the RNG
void ClassName::setSeed()
{
	int seed = (std::chrono::system_clock::now().time_since_epoch()).count();
	srand(seed);
	seed++;
}
//Use the RNG to provide numbers for the quiz
int ClassName::getNumber()
{
	ClassName::setSeed();
	int number = 0;
	while (number == 0)
	{
		number = rand() % 9;
	}
	return number;
}
//Vary the responses given to the user
bool ClassName::getResponse(bool correctness)
{
	if (correctness) {
		switch(rand() % 3)
		{ 
			case 0:
				cout << "Very Good!" << endl;
				ClassName::setSeed();
				return true;
			case 1:
				cout << "Excellent!" << endl;
				ClassName::setSeed();
				return true;
			case 2:
				cout << "Nice Work!" << endl;
				ClassName::setSeed();
				return true;
			case 3:
				cout << "Keep up the good work!" << endl;
				ClassName::setSeed();
				return true;
		}
		return true;
	}
	else
	{
		switch (rand() % 3)
		{
			case 0:
				cout << "No.  Please try again." << endl;
				ClassName::setSeed();
				return false;
			case 1:
				cout << "Wrong.  Try once more" << endl;
				ClassName::setSeed();
				return false;
			case 2:
				cout << "Don't give up!" << endl;
				ClassName::setSeed();
				return false;
			case 3:
				cout << "No. Keep trying" << endl;
				ClassName::setSeed();
				return false;
		}
		return false;
	}
}

void ClassName::calculateCorrectMultiplicationAnswer(int multiplier, int multiplicand, int answer)
{
	bool correctness = (answer == multiplier * multiplicand);
	if (!ClassName::getResponse(correctness))//if the answer is incorrect give the user another chance
	{
		score--;
		retries++;
		cout << "What is " << multiplicand << " X " << multiplier << endl;
		cin >> answer;
		ClassName::calculateCorrectMultiplicationAnswer(multiplier, multiplicand, answer);
	}
	else score++;
	ClassName::setSeed();
}

void ClassName::calculateCorrectDivisionAnswer(int dividend, int divisor, int answer)
{
	bool correctness = (answer == dividend / divisor);
	if (!ClassName::getResponse(correctness))//if the answer is incorrect give the user another chance
	{
		score--;
		retries++;
		cout << "What is " << dividend << " / " << divisor << endl;
		cin >> answer;
		ClassName::calculateCorrectDivisionAnswer(dividend, divisor, answer);
	}
	else score++;
	ClassName::setSeed();
}

int ClassName::getScore()
{
	return score;
}

int ClassName::getRetries()
{
	return retries;
}