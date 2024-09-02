// square 함수를 만들어서 컴파일 하면

// C언어 : 기계어 코드에서도 함수 이름이 square
// 
// C++   : square 함수 이름 + 인자 정보를 가지고 함수 이름 변경
//			g++ : _Zquarei  vs : ??square@YAHH@Z 처럼.
//			name mangling 이라고 합니다.





// square.c
int square(int a)
{
	return a * a;
}

// square.h
// extern "C" : 심볼을 찾을때 C 처럼 생각해 달라는 것
//			    name mangling 하지 말라는 의미 

// #ifdef __cplusplus : 현재 컴파일러가 C++ 인지 아닌지 조사하는 매크로

#ifdef __cplusplus
extern "C" {
#endif

int square(int a);

#ifdef __cplusplus
}
#endif


// using_square.cpp 만드세요
// using_square.c 로 이름 변경
#include "square.h"

int main()
{
	square(3);
}