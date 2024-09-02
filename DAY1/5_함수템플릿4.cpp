// 아래 3개 template 은 모두 동일한 코드

template<typename T>
T square1(T a)
{
	return a* a;
}

// typename 대신 class 키워드도 가능(C++98)
template<class T>
T square2(T a)
{
	return a * a;
}

// C++20 부터 아주 간결하게 템플릿 만들수 있습니다.
// => 아래 코드는 템플릿이 아닌것 같지만, template 입니다. 위와 동일
auto square3(auto a)
{
	return a * a;
}
