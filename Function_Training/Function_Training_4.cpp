#include <iostream>

// 4. 매개변수로 단을 입력받아 해당 구구단을 출력하는 함수를 만들어 봅시다.
void MultiplicationTable(int number)
{
	for (int next = 0; next <= 9; next++)
	{
		std::cout << number << " * " << next << " = " << number * next << std::endl;
	}
}

int main()
{
	int inputNumber;
	std::cout << "출력할 단을 입력하세요. : ";
	std::cin >> inputNumber;

	MultiplicationTable(inputNumber);

	return 0;
}