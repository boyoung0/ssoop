// 3_변수5-1.cpp
// typedef 에 대해서

typedef int DWORD;  // int 별명 DWORD
typedef int ARR[3];


int n;		// n 은 int 형 변수
int x[2];	// x는 int[2] 배열 변수
void foo();	// foo 는 함수 선언
void(*f)(); // f 는 함수 포인터 변수

// typedef : 변수 위치의 심볼을 타입으로 만들어 달라.
typedef int n;		// n 은 int 형 타입
typedef int x[2];	// x는 int[2] 배열 타입
typedef void foo();	// foo 는 함수 타입
typedef void(*f)(); // f 는 함수 포인터 타입

int main()
{
	x arr = { 1,2 }; // int arr[2] = {1,2}
}