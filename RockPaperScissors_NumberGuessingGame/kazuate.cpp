#include <iostream>
#include <conio.h> 
#include <random>
using namespace std;

#define KAZUATE_DEBUG_ON

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
	int randomNum;
	int inputNum;
	int num;
	bool key = true;
	int countdown = 20;

	cout << "数当てゲーム 1～100の数を当ててください" << endl;

	randomNum = KazuateRandomNum();

	while (key && countdown > 0)
	{

		cout << "数を入力してください" << endl;

#ifdef KAZUATE_DEBUG_ON

		cout << "親の手は " << randomNum << endl;

#endif // KAZUATE_DEBUG_ON


		cout << "残り" << countdown << " 回です" << endl;

		cin >> num;

		countdown--;

		if (num == randomNum)
		{
			cout << "正解！　答えは " << randomNum << " でした" << endl;
			key = false;
		}
		else if (num < randomNum)
		{
			cout << num << " より大きいです" << endl;
		}
		else if (num > randomNum)
		{
			cout << num << " より小さいです" << endl;
		}

		if (countdown >= 0)
		{
			cout << "回数切れです。残念" << endl;
		}

	}

}