// 6_제어문.cpp
int foo() { return 10; }

int main()
{
	int ret = foo();
	if (ret == 10)
	{
	}

	// 위 코드를 아래 처럼 표현할수 있습니다.
	// ++17 부터, "초기화 구문을 가지는 제어문"
	if (int ret = foo(); ret == 10)
	{

	}
}
