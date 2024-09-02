#include <iostream>
#include <string>  // std::string �� ���� ���
#include <cstring> // <string.h> �� C++ ����

// 32page 
int main()
{
	// C��� ���ڿ� : �迭 �Ǵ� ������ ���
	char s[] = "hello";
//	s = "abc";// error
//	strcpy(s, "abc"); // ok


	// C++ ��� ���ڿ� : std::string Ÿ�� ���(C++98, Ŭ�����θ���Ÿ��)
	std::string s1 = "abcd";
	std::string s2 = "efg";

	// s1, s2 �� int �������� �����ϰ� ��밡���մϴ�.
	std::string s3 = s1 + s2;

	s3 = s1;

	if (s3 == s1) {}
}