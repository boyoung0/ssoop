// square �Լ��� ���� ������ �ϸ�

// C��� : ���� �ڵ忡���� �Լ� �̸��� square
// 
// C++   : square �Լ� �̸� + ���� ������ ������ �Լ� �̸� ����
//			g++ : _Zquarei  vs : ??square@YAHH@Z ó��.
//			name mangling �̶�� �մϴ�.





// square.c
int square(int a)
{
	return a * a;
}

// square.h
// extern "C" : �ɺ��� ã���� C ó�� ������ �޶�� ��
//			    name mangling ���� ����� �ǹ� 

// #ifdef __cplusplus : ���� �����Ϸ��� C++ ���� �ƴ��� �����ϴ� ��ũ��

#ifdef __cplusplus
extern "C" {
#endif

int square(int a);

#ifdef __cplusplus
}
#endif


// using_square.cpp ���弼��
// using_square.c �� �̸� ����
#include "square.h"

int main()
{
	square(3);
}