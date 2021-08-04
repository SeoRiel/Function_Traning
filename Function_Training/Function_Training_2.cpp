#include <iostream>

// 2. 사용자에게서 정수를 입력받아 반환하는 ReadValue 함수와 넘겨준 정수를 화면에 출력하는 WriteValue 함수를 만들어 보세요.
int ReadValue(int getNumber)
{
	return getNumber;
}

void WriteValue(int setNumber)
{
	std::cout << "입력받은 정수 : " << ReadValue(setNumber) << std::endl;
}


int main()
{
	int getNumber;

	std::cout << "정수를 입력하세요. : ";
	std::cin >> getNumber;
	WriteValue(getNumber);
}