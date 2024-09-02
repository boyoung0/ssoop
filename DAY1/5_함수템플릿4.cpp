// �Ʒ� 3�� template �� ��� ������ �ڵ�

template<typename T>
T square1(T a)
{
	return a* a;
}

// typename ��� class Ű���嵵 ����(C++98)
template<class T>
T square2(T a)
{
	return a * a;
}

// C++20 ���� ���� �����ϰ� ���ø� ����� �ֽ��ϴ�.
// => �Ʒ� �ڵ�� ���ø��� �ƴѰ� ������, template �Դϴ�. ���� ����
auto square3(auto a)
{
	return a * a;
}
