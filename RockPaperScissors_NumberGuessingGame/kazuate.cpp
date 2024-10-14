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

	cout << "数当てゲーム 1〜100の数を当ててください" << endl;

	randomeNum = KazuateRandomNum();

	while (key && countdown > 0)
	{

		cout << "数を入力してください" << endl;

		cout << "残り" << countdown << " 回です" << endl;

		cin >> num;

		countdown--;

		if (num == randomeNum)
		{
			cout << "正解！　答えは " << randomeNum << " でした" << endl;
			key = false;
		}
		else if (num < randomeNum)
		{
			cout << num << " より大きいです" << endl;
		}
		else if (num > randomeNum)
		{
			cout << num << " より小さいです" << endl;
		}

		if (countdown >= 0)
		{
			cout << "回数切れです。残念" << endl;
		}

	}

}