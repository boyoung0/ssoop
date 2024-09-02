#include <cstdio>


// 37 page
// overloading
// => 인자의 갯수나, 타입이 다르면 함수이름동일한 함수를
//    여러개 만들수 있다.

// => 대부분의 언어가 지원하는 문법
// => C, Python 이 안됨.

// 원리 : 컴파일러가 "함수이름+인자모양" 을 고려해서
//		  함수 이름을 변경하는 것
// => godbolt.org 에서 "demangling identifier" 체크 해제 후 확인가능

// 왜 ?? 원리를 알아야 하나요 ??
// => C/C++ 호환성 때문에!!


int square(int a)
{
	return a * a;
}

double square(double a)
{
	return a * a;
}

int main()
{
	square(3);
	square(3.4);
}
