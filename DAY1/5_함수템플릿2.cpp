#include <iostream>

// 아래 코드를 보고 ? 채워 보세요
template<typename T1, typename T2>
//? Add(T1 a, T2 b)
//decltype(a + b) Add(T1 a, T2 b) // error. a와 b를 선언전에 사용한것

auto Add(T1 a, T2 b) -> decltype(a + b) // ok. 이럴때 사용하려고
{										// 후위 반환 타입을 만들었습니다.
	return a + b;
}

int main()
{
	std::cout << Add<double, int>(1.1, 2) << std::endl;  // 타입전달

	std::cout << Add(1.1, 2) << std::endl; // 타입 추론

//	a = 10; // error. a를 선언전에 사용
//	int a = 0;
//   a = 10; // ok. a를 선언후에 사용
}

