// 42 page
// 4_함수5. 후위 반환 타입

int square1(int a)
{
	return a * a;
}

// C++11 에서 나온 새로운 함수 모양
// => 후위 반환 타입(suffix return type)
// => square2 는 square1 과 완전히 동일
auto square2(int a) -> int
{
	return a * a;
}

int main()
{
	square1(3);
}
