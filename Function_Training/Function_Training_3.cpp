#include <iostream>

// 3. 정수 a를 정수 b로 나눈 몫을 구하는 함수와 나머지를 구하는 함수를 각각 만들어 봅시다.
int Portion(int fNumber, int sNumber)
{
	return fNumber / sNumber;
}

int Remainder(int fNumber, int sNumber)
{
	return fNumber % sNumber;
}

int main()
{
	int inputNumberF, inputNumberS;

	std::cout << "두 개의 정수를 입력하세요. : ";
	std::cin >> inputNumberF >> inputNumberS;

	std::cout << "두 개의 정수의 몫 : " << Portion(inputNumberF, inputNumberS) << std::endl;

	std::cout << "두 개의 정수의 나머지 : " << Remainder(inputNumberF, inputNumberS) << std::endl;

	return 0;
}