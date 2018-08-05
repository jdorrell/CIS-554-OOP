/**
*Provides functions to enter and view pay for employees
*/
class Worker
{
public:
	Worker();
	void getPay();

private:
	int type;
	void pay(int type, double pay);
};
