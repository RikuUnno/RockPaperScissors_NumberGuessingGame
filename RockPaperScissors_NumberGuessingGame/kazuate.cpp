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

	cout << "�����ăQ�[�� 1�`100�̐��𓖂ĂĂ�������" << endl;

	randomeNum = KazuateRandomNum();

	while (key && countdown > 0)
	{

		cout << "������͂��Ă�������" << endl;

		cout << "�c��" << countdown << " ��ł�" << endl;

		cin >> num;

		countdown--;

		if (num == randomeNum)
		{
			cout << "�����I�@������ " << randomeNum << " �ł���" << endl;
			key = false;
		}
		else if (num < randomeNum)
		{
			cout << num << " ���傫���ł�" << endl;
		}
		else if (num > randomeNum)
		{
			cout << num << " ��菬�����ł�" << endl;
		}

		if (countdown >= 0)
		{
			cout << "�񐔐؂�ł��B�c�O" << endl;
		}

	}

}