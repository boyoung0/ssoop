#include <iostream>
#include <string>  // std::string 을 위한 헤더
#include <cstring> // <string.h> 의 C++ 버전

// 32page 
int main()
{
	// C언어 문자열 : 배열 또는 포인터 사용
	char s[] = "hello";
//	s = "abc";// error
//	strcpy(s, "abc"); // ok


	// C++ 언어 문자열 : std::string 타입 사용(C++98, 클래스로만든타입)
	std::string s1 = "abcd";
	std::string s2 = "efg";

	// s1, s2 는 int 형변수와 유사하게 사용가능합니다.
	std::string s3 = s1 + s2;

	s3 = s1;

	if (s3 == s1) {}
}