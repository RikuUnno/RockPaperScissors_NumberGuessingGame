#include "janken.h"
#include "kazuate.h"
#include <conio.h> 
#include <iostream>

using namespace std;

void LoopGame()
{

	char ch;
	bool key = true;

	while (key)
	{
		cout << "どちらのゲームを開始しますか？ 1でジャンケン 2で数当てゲーム" << endl;

		ch = _getch();

		if (ch == '1')
		{
			Janken();
			key = false;
		}
		else if (ch == '2')
		{
			kazuate();
			key = false;
		}
		else
		{
			key = true;
		}
	}
}