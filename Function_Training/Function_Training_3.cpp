#include <iostream>

// 3. ���� a�� ���� b�� ���� ���� ���ϴ� �Լ��� �������� ���ϴ� �Լ��� ���� ����� ���ô�.
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

	std::cout << "�� ���� ������ �Է��ϼ���. : ";
	std::cin >> inputNumberF >> inputNumberS;

	std::cout << "�� ���� ������ �� : " << Portion(inputNumberF, inputNumberS) << std::endl;

	std::cout << "�� ���� ������ ������ : " << Remainder(inputNumberF, inputNumberS) << std::endl;

	return 0;
}