#include <iostream>

// 1. �ΰ��� double ���� �޾Ƽ� ū ���� ��ȯ�ϴ� �Լ� Max�� �ۼ��� ������.
double Max(double fNumber, double sNumber)
{
	return fNumber > sNumber ? fNumber : sNumber;
}

int main()
{
	double fDouble, sDouble;

	std::cout << "�� ���� �Ǽ��� �Է��ϼ���. : ";
	std::cin >> fDouble >> sDouble;
	std::cout << "���� ū ���� " << Max(fDouble, sDouble) << "�Դϴ�." << std::endl;
}
