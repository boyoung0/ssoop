#include <stdio.h>

// 핵심 : namespace 안에 있는 요소에 접근하는 3가지 방법

// 권장 : 완전한 이름(Qualified name) 사용하세요..

namespace Audio
{
	void init() { printf("Audio init\n"); }
}

namespace Video
{
	void init() { printf("Video init\n"); }
}

// global namespace : 어떠한 이름공간에도 포함되지 않은 영역
void init() { printf("global init\n"); }

//using Audio::init;
// => 함수 안에있으면 : 해당 함수에서만 Audio 없이 init 사용
// => 함수 밖에있으면 : 모든 함수에서만 Audio 없이 init 사용

int main()
{
	// 1. 완전한 이름(Qualified name) 을 사용한 접근
	Audio::init();
	
	// 2. using 선언(declaration)
	using Audio::init; // Audio::init 은 Audio 없이 사용가능하게 하겠다는것
	init();	  // Audio::init
	::init(); // global init  - :: scope resolution operator 입니다.

	// 3. using 지시어(directive)
	using namespace Audio; // Audio 의 모든 요소를 Audio 없이 사용.
	init();
}
