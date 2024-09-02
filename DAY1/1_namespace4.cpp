// 10 page 내용입니다.

//#include <stdio.h>  // printf 가 global 에 있습니다

#include <cstdio> // printf 가 global 에도 있고
				  // std 안에도 있습니다.

// C 용헤더		C++ 에서 새로만든 헤더
// <xxx.h> =====> <cxxx>
// <stdlib.h> ==> <cstdlib>
// <string.h> ==> <cstring>


int main()
{
	// printf 는 C 표준이지만 C++ 표준이기도 합니다.
	printf("hello\n"); // ok

	std::printf("hello\n"); // ??
}

/*
// namespace 는 열려있다
// a.h
namespace AAA {}

// b.h
namespace AAA {}
*/