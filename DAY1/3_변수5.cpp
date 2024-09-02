// 30 page

//typedef int DWORD;
//typedef void(*PF)();

// C++11 부터는 typedef 대신 using 사용하면 됩니다.
// 아래 2줄은 위 2줄과 완전히 동일합니다.
using DWORD = int;
using PF = void(*)();

// typedef : "타입의 별명" 만 가능합니다.
// using   : "타입의 별명", "template 별명"도 가능합니다.


int main()
{
	DWORD n;	// int n
	PF    f;	// void(*f)() 즉, 함수 포인터 타입
}

