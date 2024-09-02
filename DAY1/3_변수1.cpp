// 3_변수1
#include <iostream>

// C++ 은 C언어의 변수 관련 문법을 더욱 발전시켰습니다.
// 교재 21 page ~

struct Point 
{
	// #1. 구조체(클래스) 멤버에 초기값 지정가능(C++11 부터)
	int x = 0;
	int y = 0;
};

int main()
{
	// #2. 구조체형 변수 만들때 "struct" 없어도 됩니다.
	struct Point p1; // C언어는 "struct" 필요
	Point p2;		 // C++언어는 없어도 됩니다.


	// #3. C++11 부터, 이진수, 자릿수 표기법 지원
	int n1 = 0b1;		// 2진수 표기법(C++11)
	int n2 = 1'000'000; // digit separator
						// 정확한 원리는
						// 컴파일러에게 정수리터럴 사이의 ' 는 무시해달라
	
	// #4. 새로운 타입
	long long n3; // 64비트 정수(C++11)
	bool b = true; // true, false (C++98)
}
