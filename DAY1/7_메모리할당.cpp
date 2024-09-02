// 메모리할당 - 47 page
#include <iostream>

int main()
{
	// C 스타일
	int* p = (int*)malloc(sizeof(int) * 20);
	free(p);

	// C++ 스타일
	int* p1 = new int; // 메모리 할당
	delete p1;		   // 메모리 해지 

	int* p2 = new int[10];
//	delete p2; // bug...
	delete[] p2;	   // 주의 배열 처럼할당시에는 반드시 "delete[]"
}

//					malloc/free				new/delete
// 정체				함수						키워드 
// 인자				크기(정수)				타입
// 반환타입			void*					인자로 전달된 타입의 포인터
//					대부분 캐스팅해서 사용	캐스팅 필요 없음.
// 주된 특징			생성자 호출안됨			생성자 호출됨. 
