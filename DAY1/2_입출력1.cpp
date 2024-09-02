// 12 page
#include <cstdio>	// printf 위한 헤더
#include <iostream> // std::cout 헤더. 

int main()
{
	int n = 10;

	// C style 입출력
	printf("n = %d\n", n); // C style
//	scanf("%d", &n);	   // 입력
	scanf_s("%d", &n);

	// C++ style
	// 특징 #1. "%d" 등의 format 지시어 사용하지 않습니다.
	//      #2. << 연속적으로 사용가능. 
	//      #3. 개행은 '\n' 또는 std::endl;

	std::cout << "n = " << n << std::endl;

	std::cin >> n; // C++ 입력
					// &n 이 아닌 n 입니다.

	// printf : 함수
	// std::cout : 객체 입니다. 목요일날 직접 만들게 됩니다.
	// std::endl : 함수..

//	std::cout << std::endl; // 이 코드는
//	std::endl(std::cout); // 이 코드와 동일합니다.
}
