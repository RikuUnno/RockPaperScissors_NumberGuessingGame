#pragma once
#include <random>

void Srand();
int Random(int num);

void Srand()
{
	srand((unsigned int)time(NULL));
}

int Random(int num)
{
	return rand() % num;
}