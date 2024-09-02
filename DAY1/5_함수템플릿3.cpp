#include <iostream>

// �Ʒ� �ڵ�� C++11 ���� ��밡��
// => return Ÿ���� �˷��ذ�( decltype(a + b) )
// => ����, return ������ ������ �� ����
template<typename T1, typename T2>
auto Add1(T1 a, T2 b) -> decltype(a + b) 
{										
	if (a == 0) return b; 
	return a + b;
}

// C++14 ���ʹ� �Ʒ� ó�� ���� ��ȯ Ÿ�� ������ �˴ϴ�.
// �ǹ� : ��ȯ Ÿ���� �����Ϸ����� �߷��� �޶�.
//		  return ���忡 ���� ǥ�������� �߷�
// return ������ 2�� ��� ����!
template<typename T1, typename T2>
auto Add2(T1 a, T2 b)
{
	if (a == 0) return b;
	return a + b;
}

int main()
{

}

