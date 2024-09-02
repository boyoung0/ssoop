// 31 page 

struct Point
{
	int x, y;
};
int main()
{
	Point pt = { 1,2 };

	// C++98 스타일의 구조체 값 얻기
	int x = pt.x;
	int y = pt.y;

	// C++17 의 structural binding 문법

	auto [x1, y1] = pt; // 위 코드와 동일
						// 파이썬 (x1, y1) = pt;
//	int [x1, y1] = pt;	// error. auto 만 가능

//	auto [x1, y1, z1] = pt; // error. 갯수가 다름.

	// 배열도 가능합니다.
	int arr[3] = { 1,2,3 };

	auto [a, b, c] = arr; // ok. 
}
