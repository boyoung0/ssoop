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
	if ( int ret2 = foo(); ret2 == 10 )
	{

	} // <= 여기서 ret2 파괴.

	// switch 도 가능.
	switch (int n = foo(); n)
	{
	case 1: break;
	case 10: break;
	}
}
