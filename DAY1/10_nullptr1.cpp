// 11_nullptr1.cpp    54 page

int main()
{
	// 0의 정체 : 0은 정수지만 포인터로 암시적 형변환된다.
	int  n1 = 0; // ok
	int* p1 = 0; // ok
//	int* p2 = 10; // error. 0만 포인터 초기화에 사용가능합니다.

	// 포인터 초기화에 0을 사용하는 것은 혼란스러울때가 많습니다. 그래서
	// C++11 만들때 포인터 초기화를 위한 새로운 키워드추가됨

	int* p3 = nullptr;
	int n2 = nullptr; // error. 포인터 초기화에만 사용가능. 
}
