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

	cout << "����񂯂�Q�[��" << endl;

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

			cout << "�o��������߂Ă�" << endl
				<< "�O�[�Ȃ�O�E�p�[�Ȃ�P�E�`���L�Ȃ�Q�������Ă�" << endl;

			ch = _getch();

			ch == '0' ? key = false :
				ch == '1' ? key = false :
				ch == '2' ? key = false :
				key = true;

			if (key)
			{
				system("cls");
				cout << "�P�E�Q�E�R�ȊO�̐�����������܂����A������x���͂��Ă��������B" << endl;
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
			"������",
			"����",
			"����",
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