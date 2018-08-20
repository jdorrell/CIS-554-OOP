#include<iostream>
#include <string>
#include "WordFont.h"
#include <vector>
#include <iomanip>


using std::setw;
using std::right;
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

WordFont::WordFont()
{

}

void WordFont::setWord(string word)
{
	WordFont::word = word;
}

void WordFont::setCharacter(char character)
{
	WordFont::character = character;
}

void WordFont::setFontSize(int fontSize)
{
	WordFont::fontSize = fontSize;
}

void WordFont::setBold(bool bold)
{
	WordFont::bold = bold;
}

/*
Determine if a character should be assigned to a location in the 3d vector
*/
char WordFont::checkPosition(string letter, int row, int column) 
{
	if(letter == "a" || letter == "A")
	{
		if (row == 0) return WordFont::character;
		if (row == WordFont::fontSize / 2) return WordFont::character;
		if (column % WordFont::fontSize == 0) return WordFont::character;
		if (column %  WordFont::fontSize == (WordFont::fontSize - 1)) return WordFont::character;
		if (WordFont::bold == true)
		{
			if (row == 1) return WordFont::character;
			if (row == WordFont::fontSize / 2 + 1) return WordFont::character;
			if (column % WordFont::fontSize == 1) return WordFont::character;
			if (column %  WordFont::fontSize == (WordFont::fontSize - 2)) return WordFont::character;
		}
		return '\0';
	}
	if (letter == "e" || letter == "E")
	{
		if (row == 0) return WordFont::character;
		if (row == WordFont::fontSize - 1) return WordFont::character;
		if (row == WordFont::fontSize / 2) return WordFont::character;
		if (column % WordFont::fontSize == 0) return WordFont::character;
		if (WordFont::bold == true)
		{
			if (row == 1) return WordFont::character;
			if (row == WordFont::fontSize - 2) return WordFont::character;
			if (row == WordFont::fontSize / 2 - 1) return WordFont::character;
			if (column % WordFont::fontSize == 1) return WordFont::character;
		}
		return '\0';
	}
	if (letter == "i" || letter == "I")
	{
		if (row == 0) return WordFont::character;
		if (row == WordFont::fontSize - 1) return WordFont::character;
		if (column %  WordFont::fontSize == WordFont::fontSize / 2) return WordFont::character;
		if (WordFont::bold == true)
		{
			if (row == 1) return WordFont::character;
			if (row == WordFont::fontSize - 2) return WordFont::character;
			if (column %  WordFont::fontSize == WordFont::fontSize / 2 - 1) return WordFont::character;
		}
		return '\0';
	}
	if (letter == "o" || letter == "O")
	{
		if (row == 0) return WordFont::character;
		if (row == WordFont::fontSize - 1) return WordFont::character;
		if (column % WordFont::fontSize == 0) return WordFont::character;
		if (column %  WordFont::fontSize == (WordFont::fontSize - 1)) return WordFont::character;
		if (WordFont::bold == true)
		{
			if (row == 1) return WordFont::character;
			if (row == WordFont::fontSize - 2) return WordFont::character;
			if (column % WordFont::fontSize == 1) return WordFont::character;
			if (column %  WordFont::fontSize == (WordFont::fontSize - 2)) return WordFont::character;
		}
		return '\0';
	}
	if (letter == "u" || letter == "U")
	{
		if (row == WordFont::fontSize - 1) return WordFont::character;
		if (column %  WordFont::fontSize == (WordFont::fontSize - 1)) return WordFont::character;
		if (column % WordFont::fontSize == 0) return WordFont::character;
		if (WordFont::bold == true)
		{
			if (row == WordFont::fontSize - 2) return WordFont::character;
			if (column %  WordFont::fontSize == (WordFont::fontSize - 2)) return WordFont::character;
			if (column % WordFont::fontSize == 1) return WordFont::character;
		}
		return '\0'; 
	}
	if (letter == "b" || letter == "B")
	{
		if (row == 0) return WordFont::character;
		if (row == WordFont::fontSize - 1) return WordFont::character;
		if (row == WordFont::fontSize / 2) return WordFont::character;
		if (column % WordFont::fontSize == 0) return WordFont::character;
		if (column %  WordFont::fontSize == (WordFont::fontSize - 1)) return WordFont::character;
		if (WordFont::bold == true)
		{
			if (row == 1) return WordFont::character;
			if (row == WordFont::fontSize - 2) return WordFont::character;
			if (row == WordFont::fontSize / 2 - 1) return WordFont::character;
			if (column % WordFont::fontSize == 1) return WordFont::character;
			if (column %  WordFont::fontSize == (WordFont::fontSize - 2)) return WordFont::character;
		}
		return '\0';
	}
	if (letter == "c" || letter == "C")
	{
		if (row == 0) return WordFont::character;
		if (row == (WordFont::fontSize - 1)) return WordFont::character;
		if (column % WordFont::fontSize == 0) return WordFont::character;
		if (WordFont::bold == true)
		{
			if (row == 1) return WordFont::character;
			if (row == (WordFont::fontSize - 2)) return WordFont::character;
			if (column % WordFont::fontSize == 1) return WordFont::character;
		}
		return '\0';

	}
	if (letter == "d" || letter == "D")
	{
		if (row == 0 && column % WordFont::fontSize != (WordFont::fontSize - 1)) return WordFont::character;
		if (row == WordFont::fontSize - 1 && column % WordFont::fontSize != (WordFont::fontSize - 1)) return WordFont::character;
		if (column % WordFont::fontSize == 0) return WordFont::character;
		if (column %  WordFont::fontSize == WordFont::fontSize - 1)
		{
			if (row % WordFont::fontSize != 0)
			{
				if (row % WordFont::fontSize != WordFont::fontSize - 1)return WordFont::character;
			}
		}
		if (WordFont::bold == true)
		{
			if (row == 1 && column % WordFont::fontSize != (WordFont::fontSize - 2)) return WordFont::character;
			if (row == WordFont::fontSize - 2 && column % WordFont::fontSize != (WordFont::fontSize - 2)) return WordFont::character;
			if (column % WordFont::fontSize == 1) return WordFont::character;
			if (column %  WordFont::fontSize == WordFont::fontSize - 2)
			{
				if (row % WordFont::fontSize != 1)
				{
					if (row % WordFont::fontSize != WordFont::fontSize - 2)return WordFont::character;
				}
			}
		}
		return '\0';
						
	}
	if (letter == "f" || letter == "F")
	{
		if (row == 0) return WordFont::character;
		if (row == WordFont::fontSize / 2) return WordFont::character;
		if (column % WordFont::fontSize == 0) return WordFont::character;
		if (WordFont::bold == true)
		{
			if (row == 1) return WordFont::character;
			if (row == WordFont::fontSize / 2 - 1) return WordFont::character;
			if (column % WordFont::fontSize == 1) return WordFont::character;
		}
		return '\0';
	}
	if (letter == "g" || letter == "G")
	{
		if (row == 0) return WordFont::character;
		if (row == WordFont::fontSize - 1) return WordFont::character;
		if (column %  WordFont::fontSize > WordFont::fontSize / 2 && row == WordFont::fontSize / 2) return WordFont::character;
		if (column %  WordFont::fontSize == (WordFont::fontSize - 1) && row > WordFont::fontSize / 2) return WordFont::character;
		if (column % WordFont::fontSize == 0) return WordFont::character;
		if (WordFont::bold == true)
		{
			if (row == 1) return WordFont::character;
			if (row == WordFont::fontSize - 2) return WordFont::character;
			if (column %  WordFont::fontSize > WordFont::fontSize / 2 - 1 && row == WordFont::fontSize / 2 - 1) return WordFont::character;
			if (column %  WordFont::fontSize == (WordFont::fontSize - 2) && row > WordFont::fontSize / 2 - 1) return WordFont::character;
			if (column % WordFont::fontSize == 1) return WordFont::character;
		}
		return '\0';
	}
	if (letter == "h" || letter == "H")
	{
		if (row == WordFont::fontSize / 2) return WordFont::character;
		if (column % WordFont::fontSize == 0) return WordFont::character;
		if (column %  WordFont::fontSize == (WordFont::fontSize - 1)) return WordFont::character;
		if (WordFont::bold == true)
		{
			if (row == WordFont::fontSize / 2 - 1) return WordFont::character;
			if (column % WordFont::fontSize == 1) return WordFont::character;
			if (column %  WordFont::fontSize == (WordFont::fontSize - 2)) return WordFont::character;
		}
		return '\0';
	}
	if (letter == "j" || letter == "J")
	{
		if (row == WordFont::fontSize - 1) return WordFont::character;
		if (column %  WordFont::fontSize == WordFont::fontSize - 1) return WordFont::character;
		if (row > WordFont::fontSize / 2 && column %  WordFont::fontSize == 0) return WordFont::character;
		if (WordFont::bold == true)
		{
			if (row == WordFont::fontSize - 2) return WordFont::character;
			if (column %  WordFont::fontSize == WordFont::fontSize - 2) return WordFont::character;
			if (row > WordFont::fontSize / 2 && column %  WordFont::fontSize == 1) return WordFont::character;
		}
		return '\0';
	}
	if (letter == "k" || letter == "K")
	{
		if (column % WordFont::fontSize == 0) return WordFont::character;
		if (column %  WordFont::fontSize == WordFont::fontSize - 1)
		{
			if (row > (WordFont::fontSize - 1) / 2 + 1)return WordFont::character;
			if(row < (WordFont::fontSize / 2) - 2) return WordFont::character;
		}
		if (row == WordFont::fontSize / 2 - 1 && column % WordFont::fontSize < 6)return WordFont::character;
		if (row == WordFont::fontSize / 2 - 2 && column % WordFont::fontSize == WordFont::fontSize - 2)return WordFont::character;
		if (row == WordFont::fontSize / 2 && column % WordFont::fontSize == WordFont::fontSize - 2)return WordFont::character;
		if (WordFont::bold == true)
		{
			if (column % WordFont::fontSize == 1) return WordFont::character;
			if (column %  WordFont::fontSize == WordFont::fontSize - 2)
			{
				if (row > WordFont::fontSize / 2 || row < WordFont::fontSize / 2 - 1)return WordFont::character;
			}
			if (row == WordFont::fontSize / 2 && column % WordFont::fontSize < 6)return WordFont::character;
		}
		return '\0';
	}
	if (letter == "l" || letter == "L")
	{
		if (row == WordFont::fontSize - 1) return WordFont::character;
		if (column % WordFont::fontSize == 0) return WordFont::character;
		if (WordFont::bold == true)
		{
			if (row == WordFont::fontSize - 2) return WordFont::character;
			if (column % WordFont::fontSize == 1) return WordFont::character;
		}
		return '\0';
	}
	if (letter == "m" || letter == "M")
	{
		if (row == 0) return WordFont::character;
		if (column % WordFont::fontSize == 0) return WordFont::character;
		if (column %  WordFont::fontSize == WordFont::fontSize / 2) return WordFont::character;
		if (column %  WordFont::fontSize == (WordFont::fontSize - 1)) return WordFont::character;
		if (WordFont::bold == true)
		{
			if (row == 1) return WordFont::character;
			if (column % WordFont::fontSize == 1) return WordFont::character;
			if (column %  WordFont::fontSize == WordFont::fontSize / 2 - 1) return WordFont::character;
			if (column %  WordFont::fontSize == (WordFont::fontSize - 2)) return WordFont::character;
		}
		return '\0';
	}
	if (letter == "n" || letter == "N")
	{
		if (column % WordFont::fontSize == 0) return WordFont::character;
		if (column %  WordFont::fontSize == (WordFont::fontSize - 1)) return WordFont::character;
		if(column %  WordFont::fontSize == row)return WordFont::character;
		if (WordFont::bold == true)
		{
			if (column % WordFont::fontSize == 1) return WordFont::character;
			if (column %  WordFont::fontSize == (WordFont::fontSize - 2)) return WordFont::character;
			if (column %  WordFont::fontSize == row - 1)return WordFont::character;
		}
		return '\0';
	}
	if (letter == "r" || letter == "R")
	{
		if (row == 0 && column % WordFont::fontSize != (WordFont::fontSize - 1)) return WordFont::character;
		if (row == WordFont::fontSize / 2) return WordFont::character;
		if (column % WordFont::fontSize == 0) return WordFont::character;
		if (column %  WordFont::fontSize == WordFont::fontSize - 1)
		{
			if (row % WordFont::fontSize != 0)return WordFont::character;
		}
		if (WordFont::bold == true)
		{
			if (row == 1 && column % WordFont::fontSize != (WordFont::fontSize - 2)) return WordFont::character;
			if (row == WordFont::fontSize / 2 - 1) return WordFont::character;
			if (column % WordFont::fontSize == 1) return WordFont::character;
			if (column %  WordFont::fontSize == WordFont::fontSize - 2)
			{
				if (row % WordFont::fontSize != 1)return WordFont::character;
			}
		}
		return '\0';
	}
	if (letter == "s" || letter == "S")
	{
		if (row == 0) return WordFont::character;
		if (row == WordFont::fontSize - 1) return WordFont::character;
		if (column % WordFont::fontSize == 0 && row <= WordFont::fontSize / 2) return WordFont::character;
		if (column %  WordFont::fontSize == (WordFont::fontSize - 1) && row > WordFont::fontSize / 2) return WordFont::character;
		if (row == WordFont::fontSize / 2) return WordFont::character;
		if (WordFont::bold == true)
		{
			if (row == 1) return WordFont::character;
			if (row == WordFont::fontSize - 2) return WordFont::character;
			if (column % WordFont::fontSize == 1 && row <= WordFont::fontSize / 2 - 1) return WordFont::character;
			if (column %  WordFont::fontSize == (WordFont::fontSize -2) && row > WordFont::fontSize / 2 - 1) return WordFont::character;
			if (row == WordFont::fontSize / 2 - 1) return WordFont::character;
		}
		return '\0';
	}
	if (letter == "t" || letter == "T")
	{
		if (row == 0) return WordFont::character;
		if (column %  WordFont::fontSize == WordFont::fontSize / 2) return WordFont::character;
		if (WordFont::bold == true)
		{
			if (row == 1) return WordFont::character;
			if (column %  WordFont::fontSize == WordFont::fontSize / 2 - 1) return WordFont::character;
		}
		return '\0';
	}
	if (letter != "a" || letter != "A" ||
		letter != "e" || letter != "E" ||
		letter != "i" || letter != "I" ||
		letter != "o" || letter != "O" ||
		letter != "u" || letter != "U" ||
		letter != "b" || letter != "B" ||
		letter != "c" || letter != "C" ||
		letter != "d" || letter != "D" ||
		letter != "f" || letter != "F" ||
		letter != "g" || letter != "G" ||
		letter != "h" || letter != "H" ||
		letter != "j" || letter != "J" ||
		letter != "k" || letter != "K" ||
		letter != "l" || letter != "L" ||
		letter != "m" || letter != "M" ||
		letter != "n" || letter != "N" ||
		letter != "r" || letter != "R" ||
		letter != "s" || letter != "S" ||
		letter != "t" || letter != "T")
	{
		cout << "Invalid Character";
		return '\0';
	}
	

};

/*
assign character based on results of WordFont::checkPosition()
*/
vector<vector<char>> WordFont::getWordVector(string word)
{
	vector<vector<char>> wordVector(WordFont::fontSize, vector<char>(WordFont::fontSize * WordFont::word.size()));
	
	for (unsigned int rows = 0; rows < WordFont::fontSize; rows++)
	{
		int letter = 0;
		for (int cols = 0; cols < WordFont::fontSize * WordFont::word.size(); cols++)
		{ 
			wordVector[rows][cols] = WordFont::checkPosition(word.substr(letter, 1), rows, cols);
			if ((cols + 1) % WordFont::fontSize == 0)letter++;
		}
		cout << endl;
	}

	return wordVector;
}

/*
Print the resulting word
*/
void WordFont::printWord()
{
	vector<vector<char>> word = WordFont::getWordVector(WordFont::word);
	
		for (unsigned int rows = 0; rows < WordFont::fontSize; rows++)
		{
			for (unsigned int cols = 0; cols < WordFont::fontSize * WordFont::word.size(); cols++)
			{
				// put some data in each row and column, using subscript notation
				if (cols % WordFont::fontSize == 0) cout << '\0';
				cout << setw(2) << word[rows][cols];
				//cout << word[rows][cols];	
			}
			cout << endl;
		}
}