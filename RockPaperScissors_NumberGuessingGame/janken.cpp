#include <iostream>
#include <random>
#include <conio.h>
using namespace std;

enum State
{
	ROCK = 0,
	PAPER = 1,
	SCISSORS = 2
};

enum WinOrLose
{
	DRAW = 0,
	WIN = 1,
	LOSE = 2
};

void Srand()
{
	srand((unsigned int)time(NULL));
}

int Random()
{
	return rand() % 3;
}

void Janken()
{
	char ch;
	State state[2];
	static WinOrLose wol;
	int num = 0;
	bool key = true;

	cout << "じゃんけんゲーム" << endl;

	num = Random();

	if (num == 0) {
		state[1] = ROCK;
	}
	else if (num == 1) {
		state[1] = PAPER;
	}
	else {
		state[1] = SCISSORS;
	}

	while (key)
	{
		key = false;

		cout << "出す手を決めてね" << endl
			<< "グーなら０・パーなら１・チョキなら２を押してね" << endl;

		ch = _getch();

		ch == '0' ? key = false :
			ch == '1' ? key = false :
			ch == '2' ? key = false :
			key = true;

		if (key)
		{
			system("cls");
			cout << "１・２・３以外の数字が押されました、もう一度入力してください。" << endl;
		}

	}


	ch == '0' ? state[2] = ROCK :
	ch == '1' ? state[2] = PAPER :
	state[2] = SCISSORS;
	
	if ((statePlayer == ROCK && stateAI == ROCK) || (statePlayer == PAPER && stateAI == PAPER) || (statePlayer == SCISSORS && stateAI == SCISSORS))
	{
		wol = DRAW;
	}
	else if ((statePlayer == PAPER && stateAI == ROCK) || (statePlayer == ROCK && stateAI == SCISSORS))
	{
		wol = WIN;
	}
	else if ((stateAI == PAPER && statePlayer == ROCK) || (stateAI == ROCK && statePlayer == SCISSORS))
	{
		wol = LOSE;
	}

	const char* MESSAGE[] = {
		"あいこ",
		"勝ち",
		"負け",
	};

	cout << MESSAGE[wol] << endl;



}