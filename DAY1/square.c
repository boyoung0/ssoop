// square.c
int square(int a)
{
	return a * a;
}

// square.h
int square(int a);


// using_square.cpp ���弼��
#include "square.h"

int main()
{
	square(3);
}