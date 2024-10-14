#include <iostream>
#include <conio.h>
#include <random>
using namespace std;

enum JankenState
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

void InitJankenRandomNum()
{
	srand((unsigned int)time(NULL));
}

int JankenRandomNum()
{
	return rand() % 3;
}

void Janken()
{
	char ch;
	JankenState state[2];
	static WinOrLose wol;
	int num = 0;
	bool key = true;
	bool draw = true;

	InitJankenRandomNum();

	cout << "じゃんけんゲーム" << endl;

	while (draw)
	{

		while (key)
		{
			key = false;

			num = JankenRandomNum();

			if (num == 0) {
				state[0] = ROCK;
			}
			else if (num == 1) {
				state[0] = PAPER;
			}
			else {
				state[0] = SCISSORS;
			}

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


		ch == '0' ? state[1] = ROCK :
			ch == '1' ? state[1] = PAPER :
			state[1] = SCISSORS;

		if ((state[1] == ROCK && state[0] == ROCK) || (state[1] == PAPER && state[0] == PAPER) || (state[1] == SCISSORS && state[0] == SCISSORS))
		{
			wol = DRAW;
		}
		else if ((state[1] == PAPER && state[0] == ROCK) || (state[1] == ROCK && state[0] == SCISSORS) || (state[1] == SCISSORS && state[0] == PAPER))
		{
			wol = WIN;
		}
		else if ((state[0] == PAPER && state[1] == ROCK) || (state[0] == ROCK && state[1] == SCISSORS) || (state[0] == SCISSORS && state[1] == PAPER))
		{
			wol = LOSE;
		}

		const char* MESSAGE[] = {
			"あいこ",
			"勝ち",
			"負け",
		};

		cout << MESSAGE[wol] << endl;

		if (wol == DRAW)
		{
			draw = true;
			key = true;
		}
		else
		{
			draw = false;
		}

	}

}