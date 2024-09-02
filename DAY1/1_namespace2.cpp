#include <stdio.h>

// 핵심 : namespace 안에 있는 요소에 접근하는 3가지 방법

namespace Audio
{
	void init() { printf("Audio init\n"); }
}

namespace Video
{
	void init() { printf("Video init\n"); }
}

int main()
{
	// 1. 완전한 이름(Qualified name) 을 사용한 접근
	Audio::init();
	
	// 2. using 선언(declaration)
	using Audio::init; // Audio::init 은 Audio 없이 사용가능하게 하겠다는것
	init();

	// 3. using 지시어(directive)
	using namespace Audio; // Audio 의 모든 요소를 Audio 없이 사용.
	init();
}
