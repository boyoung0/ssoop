// 8_반복문 43 page
#include <iostream>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
		std::cout << x[i] << std::endl;


	// C++11 의 새로운 for 문
	// => 아래 코드는 위와 유사한 의미.
	for (int e : x)
	{
		std::cout << e << std::endl; 
	}
}
