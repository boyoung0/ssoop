#include <iostream>

void foo(void* p) { std::cout << "1. void*" << std::endl;}
void foo(int n)   { std::cout << "2. int" << std::endl; }

void goo(char* s) {}

int main()
{
	foo(0);			// 2. int
	foo((void*)0);	// 1. void*

#ifdef __cplusplus
	#define NULL 0
#else 
	#define NULL (void*)0 // 일부 C언어가 이렇게 구현되어 있습니다.
#endif

	foo(NULL);

	goo(NULL);

	foo(nullptr);
	goo(nullptr);

	// void* => 다른타입* 로의 암시적 형변환
	// C언어   : ok
	// C++언어 : 안됨.
}
