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

// 코드 폭팔(code bloat )
// => 템플릿 사용시
//    너무나 많은 함수/클래스가 생성되어서 코드 메모리 사용량이 증가
//    하는 현상!!
//	  임베디드 처럼 메모리가 부족한 환경에서는 주의 해야 합니다.