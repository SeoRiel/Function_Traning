#include <iostream>

// 4. �Ű������� ���� �Է¹޾� �ش� �������� ����ϴ� �Լ��� ����� ���ô�.
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
	std::cout << "����� ���� �Է��ϼ���. : ";
	std::cin >> inputNumber;

	MultiplicationTable(inputNumber);

	return 0;
}