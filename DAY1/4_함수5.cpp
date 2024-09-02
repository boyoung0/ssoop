// 42 page
// 4_함수5. 후위 반환 타입

int square1(int a)
{
	return a * a;
}

// C++11 에서 나온 새로운 함수 모양
// => 후위 반환 타입(suffix return type)
// => square2 는 square1 과 완전히 동일
// => swift, rust, kotlin등의 대부분의 언어가 반환 타입을 뒤에 표기
//    python 도 annotation 사용할때 뒤에 표기
auto square2(int a) -> int
{
	return a * a;
}

int main()
{
	square1(3);
}
