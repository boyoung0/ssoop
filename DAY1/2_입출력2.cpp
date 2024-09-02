// 3_입출력2.cpp - 18 page아래 부분
#include <iostream>
#include <iomanip> 
// 입출력 조정자(iomanipulator)
// => 입출력의 형태를 변경하는 함수들
// => <iostream>, <iomanip> 헤더 

int main()
{
	int n = 10;
	std::cout << n << std::endl; // 10.  10진수로 출력

	std::cout << std::hex << n << std::endl; // a, 16진수 출력


	std::cout << std::dec << n << std::endl; // 10

	std::cout << std::setw(10) << std::setfill('#') << n << std::endl; // 
}
