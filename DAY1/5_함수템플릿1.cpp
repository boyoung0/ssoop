#include <iostream>

template<typename T>
T Add(T a, T b)
{
	return a + b;
}
int main()
{
	std::cout << Add(1,   2 ) << std::endl;	// 3
	std::cout << Add(1.1, 2.1) << std::endl;// 3.2

	std::cout << Add(1.1, 2) << std::endl; // error. T타입을
										// 추론할수 없음.
	std::cout << Add<double>(1.1, 2) << std::endl; // ok
}

