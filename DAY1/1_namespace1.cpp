// 교재 7 page
#include <stdio.h>


namespace Audio
{
	void init() { printf("Audio init\n"); }
	
	// Audio 관련 모든 함수, 구조체, 전역변수등을 이 공간에서 만들면 됩니다.
}

namespace Video
{
	void init() { printf("Video init\n"); }
}

int main()
{
	 Audio::init();
	 Video::init();
}









// 빌드 하는 법 : Ctrl + F5
// 폰트 변경 : 도구 메뉴 - 옵션 메뉴 선택
