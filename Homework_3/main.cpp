#include <iostream>
#include "CAI.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int answer = 0;
	ClassName cai;
	cout << "Welcome to CAI!" << endl;
	cout << "At any point enter -1 to quit" << endl;
	while (answer != -1)
	{
		//Ask 5 multiplication questions
		for(int i = 1; i <= 5; i++)
		{
			int multiplicand = cai.getNumber();
			int multiplier = cai.getNumber();
			cout << "What is " << multiplicand << " X " << multiplier << endl;
			cin >> answer;
			cai.calculateCorrectMultiplicationAnswer(multiplier, multiplicand, answer);
		}
		//Ask 5 division questions
		for (int j = 1; j <= 5; j++)
		{
			int divisor = cai.getNumber();
			int dividend = cai.getNumber();
			//Ensure the numbers from the RNG can be divided with no reaminers or decimals
			while (dividend < divisor || dividend % divisor != 0)
			{
				divisor = cai.getNumber();
				dividend = cai.getNumber();
			}
			cout << "What is " << dividend << " / " << divisor << endl;
			cin >> answer;
			cai.calculateCorrectDivisionAnswer(dividend, divisor, answer);
			if (j == 5) 
			{
				cout << "You scored " << cai.getScore()
					<< " out of 10 correct on the first try";
					if (cai.getScore() < 10)
					{
						//Calculate the average number of retries
						double average = cai.getRetries() / (10 - cai.getScore());
						cout <<"," << endl << "and an average of " << average 
							<< " guesses when you missed on the first try" << endl;
					}
				answer = -1;
			}
		}
	}
	return 0;
}