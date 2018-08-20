#include <iostream>
#include "WordFont.h"
#include <windows.h>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	WordFont wordFont;
	string word;
	char character;
	int fontSize;
	int bold;
	
	/*
	Take user input for word to display
	*/
	cout << "Enter a word (8 letters or less), using a, e, i, o, u, c, b, d, f , g, h, j, k, l, m, n, r, s, t : ";
	cin >> word;
	cout << endl;
	wordFont.setWord(word);

	/*
	Take user input for the character of pixel to display
	*/
	cout << "Enter the pixel charcacter you want to draw : ";
	cin >> character;
	cout << endl;
	wordFont.setCharacter(character);

	/*
	Take user input for number of pixels to display
	*/
	cout << "Enter the font size (8 - 12) : ";
	cin >> fontSize;
	cout << endl;
	wordFont.setFontSize(fontSize);

	/*
	Take user input for displaying boldor not
	*/
	cout << "Bold? (0 = No, 1 = Yes) : ";
	cin >> bold;
	cout << endl;
	wordFont.setBold(bold);

	wordFont.printWord();
	Sleep(5000);
}
