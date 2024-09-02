// 34 page ~
// 
// C++함수의 특징 1. 디폴트 파라미터
// => 인자를 전달하지 않으면 "디폴트 값 사용"

// 주의 #1. 선언과 구현으로 분리시, 선언에만 표기 합니다.
//      #2. 마지막 인자 부터 차례대로만 지정 가능합니다.

// 원리는 "godbolt.org" 에서 확인 가능합니다.

void f1(int a = 0, int b ,    int c = 0); // error
void f2(int a ,    int b = 0, int c = 0); // ok


void foo(int a = 0, int b = 0, int c = 0);

int main()
{
	foo(1, 2, 3);
	foo(1, 2);	// 1, 2, 0
	foo(1);		// 1, 0, 0
	foo();		// 0, 0, 0
}

void foo(int a /*= 0*/, int b /*= 0*/, int c /*= 0*/)
{
}
