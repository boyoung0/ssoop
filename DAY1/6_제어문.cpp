// 6_���.cpp
int foo() { return 10; }

int main()
{
	int ret = foo();
	if (ret == 10)
	{
	}

	// �� �ڵ带 �Ʒ� ó�� ǥ���Ҽ� �ֽ��ϴ�.
	// ++17 ����, "�ʱ�ȭ ������ ������ ���"
	if ( int ret2 = foo(); ret2 == 10 )
	{

	} // <= ���⼭ ret2 �ı�.

	// switch �� ����.
	switch (int n = foo(); n)
	{
	case 1: break;
	case 10: break;
	}
}
