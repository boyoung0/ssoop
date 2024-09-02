// 1_namespace3.cpp - 9page 내용
// 
#include <algorithm>
//using namespace std;

// 핵심 : 모든 C++ 표준은 "std" 라는 namespace 안에 있습니다.

int count = 0;

int main()
{
	int k = count; // 왜 에러일까요 ??
			// C++ 표준에 "std::count()" 라는 함수가 있습니다.
			// using namespace std 때문에 
			// 전역변수와 표준함수가 이름 충돌 발생

//	int n = min(3, 2); // C++ 표준 함수. algorithm 헤더 필요
					   // error.
	int n = std::min(3, 2);
}
