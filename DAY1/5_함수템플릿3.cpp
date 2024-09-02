#include <iostream>

// 아래 코드는 C++11 부터 사용가능
// => return 타입을 알려준것( decltype(a + b) )
// => 따라서, return 문장이 여러개 라도 가능
template<typename T1, typename T2>
auto Add1(T1 a, T2 b) -> decltype(a + b) 
{										
	if (a == 0) return b; 
	return a + b;
}

// C++14 부터는 아래 처럼 후위 반환 타입 생략도 됩니다.
// 의미 : 반환 타입을 컴파일러에게 추론해 달라.
//		  return 문장에 사용된 표현식으로 추론
// return 문장이 2개 라면 에러!
template<typename T1, typename T2>
auto Add2(T1 a, T2 b)
{
	if (a == 0) return b;
	return a + b;
}

int main()
{

}

