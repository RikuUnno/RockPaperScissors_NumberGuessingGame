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
		cout << "�ǂ���̃Q�[�����J�n���܂����H 1�ŃW�����P�� 2�Ő����ăQ�[��" << endl;

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