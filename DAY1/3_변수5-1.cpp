// 3_����5-1.cpp
// typedef �� ���ؼ�

typedef int DWORD;  // int ���� DWORD
typedef int ARR[3];


int n;		// n �� int �� ����
int x[2];	// x�� int[2] �迭 ����
void foo();	// foo �� �Լ� ����
void(*f)(); // f �� �Լ� ������ ����

// typedef : ���� ��ġ�� �ɺ��� Ÿ������ ����� �޶�.
typedef int n;		// n �� int �� Ÿ��
typedef int x[2];	// x�� int[2] �迭 Ÿ��
typedef void foo();	// foo �� �Լ� Ÿ��
typedef void(*f)(); // f �� �Լ� ������ Ÿ��

int main()
{
	x arr = { 1,2 }; // int arr[2] = {1,2}
}