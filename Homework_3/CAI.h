class ClassName
{
public:
	int getNumber();
	void calculateCorrectMultiplicationAnswer(int multiplier, int multiplicand, int answer);
	void calculateCorrectDivisionAnswer(int dividend, int divisor, int answer);
	int getScore();
	int getRetries();
private:
	void setSeed();
	bool getResponse(bool correctness);
};
