#include <cstdio>


// 37 page
// overloading
// => 인자의 갯수나, 타입이 다르면 함수이름동일한 함수를
//    여러개 만들수 있다.
int square(int a)
{
	return a * a;
}

double square(double a)
{
	return a * a;
}

int main()
{
	square(3);
	square(3.4);
}
