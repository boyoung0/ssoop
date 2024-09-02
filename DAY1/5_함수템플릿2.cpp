#include <iostream>

// 아래 코드를 보고 ? 채워 보세요
template<typename T1, typename T2>
//? Add(T1 a, T2 b)
decltype(a + b) Add(T1 a, T2 b)
{
	return a + b;
}

int main()
{
	std::cout << Add<double, int>(1.1, 2) << std::endl;  // 타입전달

	std::cout << Add(1.1, 2) << std::endl; // 타입 추론

}

