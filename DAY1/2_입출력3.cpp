// 2_입출력3.cpp
#include <iostream> // C++98 
#include <print>    // C++23

int main()
{
	// C++98 표준 출력 : std::cout 
	std::cout << "hello\n";

	// C++23 표준 출력
	std::print("hello");   // 개행 안함
	std::println("hello"); // 개행
}