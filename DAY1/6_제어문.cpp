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
	if (int ret = foo(); ret == 10)
	{

	}
}
