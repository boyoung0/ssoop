// 28 page ~

int main()
{
//	int x[3] = { 1,2,3 };
	double x[3] = { 1,2,3 };

//	int n = x[0];

	// auto : 우변의 표현식을 보고 좌변의 타입을 결정해 달라.
	//		  컴파일 시간에 결정. 성능저하 없다.
	//        아주 많이 사용됩니다.
	//		  C++11
	auto n = x[0];

	// decltype(exp) : exp 의 타입을 조사해 달라.
	decltype(n) d; // n 와 같은 타입의 변수 d
					// "double d"

	const int c = 10;
	auto a = c; // a의 타입은 ?
				// 1. int       => 정답
				// 2. const int

	int arr[3] = { 1,2,3 };

	auto a2 = arr;  // 1. "int a2[3] = arr" 로 했다면 컴파일 에러
					// 2. "int* a2" 로 했다면 에러 아님.
					// 따라서, a2 는 int* 로 결정됨. 
}
