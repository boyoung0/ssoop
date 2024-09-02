// 39 page
// C++ 함수의 특징 4. 함수 템플릿
/*
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
*/
// 구현이 유사(동일)한 함수가 여러개 필요 하면
// "함수" 를 만들지 말고 "함수를 만드는 틀" 을 만드세요

template<typename T>  
T square(T a)
{
	return a * a;
}

int main()
{
//	square<int>(3);		// 1. 이순간 컴파일러가 square(int) 함수생성
						// 2. 이 위치는 "call square(3)" 으로 변경

// square<double>(3.4);// 1. square(double) 함수 생성
						// 2. call square(3.4)

	// 타입인자 생략시 "함수 인자로 타입 결정"
	square(3); // square<int>(3)
}