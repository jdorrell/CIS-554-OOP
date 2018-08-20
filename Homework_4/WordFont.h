#include<string>
#include <vector>

using std::vector;
using std::string;

class WordFont
{
public:
	WordFont();
	void setWord(string);
	void setCharacter(char);
	void setFontSize(int);
	void setBold(bool);
	void printWord();

private:
	string word;
	unsigned int font;
	char character;
	int fontSize;
	bool bold;
	vector < vector<char>> getWordVector(string);
	char checkPosition(string letter, int row, int column);
};