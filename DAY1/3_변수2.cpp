#include <iostream>

// 26page - 중요한 변화.!

struct Point
{
	int x, y;
};
int main()
{
	// C/C++98 : 변수의 종류에 따라 초기화 방법이 다릅니다.
	int n1 = 10;
	int x1[3] = { 1,2,3 };
	Point p1 = { 1,2 };

	// C++11 : uniform initialization 문법
	// => 모든 종류의 변수는 동일한(uniform) 방법으로 초기화 가능하다.
	// => 별명으로 "중괄화 초기화(brace init)" 라고 부릅니다.
	int n2 = { 10 };
	int x2[3] = { 1,2,3 };
	Point p2 = { 1,2 };

	// = 이 없어도 됩니다.
	int n3 { 10 };
	int x3[3] { 1,2,3 };
	Point p3 { 1,2 };

	// =이 없는 경우 : direct initialization(직접 초기화)
	// =이 있는 경우 : copy   initialization(복사 초기화)
	// 차이점은 내일(생성자 배울때). 지금은 위2개가 유사하다고 생각해도 됩니다.
}



