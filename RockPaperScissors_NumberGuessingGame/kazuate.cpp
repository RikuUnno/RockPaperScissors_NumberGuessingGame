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

	cout << "�����ăQ�[�� 1�`100�̐��𓖂ĂĂ�������" << endl;

	randomNum = KazuateRandomNum();

	while (key && countdown > 0)
	{

		cout << "������͂��Ă�������" << endl;

#ifdef KAZUATE_DEBUG_ON

		cout << "�e�̎�� " << randomNum << endl;

#endif // KAZUATE_DEBUG_ON


		cout << "�c��" << countdown << " ��ł�" << endl;

		cin >> num;

		countdown--;

		if (num == randomNum)
		{
			cout << "�����I�@������ " << randomNum << " �ł���" << endl;
			key = false;
		}
		else if (num < randomNum)
		{
			cout << num << " ���傫���ł�" << endl;
		}
		else if (num > randomNum)
		{
			cout << num << " ��菬�����ł�" << endl;
		}

		if (countdown >= 0)
		{
			cout << "�񐔐؂�ł��B�c�O" << endl;
		}

	}

}