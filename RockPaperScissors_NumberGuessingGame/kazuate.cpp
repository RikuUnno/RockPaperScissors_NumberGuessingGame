#include <iostream>
#include <conio.h> 
#include <random>
using namespace std;

void InitKazuateRandomNum()
{
	srand((unsigned int)time(NULL));
}

int KazuateRandomNum()
{
	return rand() % 100 + 1;
}

void kazuate()
{
	InitKazuateRandomNum();
	int randomeNum;
	int inputNum;
	int num;
	bool key = true;
	int countdown = 20;

	cout << "”“–‚ÄƒQ[ƒ€ 1`100‚Ì”‚ð“–‚Ä‚Ä‚­‚¾‚³‚¢" << endl;

	randomeNum = KazuateRandomNum();

	while (key && countdown > 0)
	{

		cout << "”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << endl;

		cout << "Žc‚è" << countdown << " ‰ñ‚Å‚·" << endl;

		cin >> num;

		countdown--;

		if (num == randomeNum)
		{
			cout << "³‰ðI@“š‚¦‚Í " << randomeNum << " ‚Å‚µ‚½" << endl;
			key = false;
		}
		else if (num < randomeNum)
		{
			cout << num << " ‚æ‚è‘å‚«‚¢‚Å‚·" << endl;
		}
		else if (num > randomeNum)
		{
			cout << num << " ‚æ‚è¬‚³‚¢‚Å‚·" << endl;
		}

		if (countdown >= 0)
		{
			cout << "‰ñ”Ø‚ê‚Å‚·BŽc”O" << endl;
		}

	}

}