#include <iostream>

// 2. ����ڿ��Լ� ������ �Է¹޾� ��ȯ�ϴ� ReadValue �Լ��� �Ѱ��� ������ ȭ�鿡 ����ϴ� WriteValue �Լ��� ����� ������.
int ReadValue(int getNumber)
{
	return getNumber;
}

void WriteValue(int setNumber)
{
	std::cout << "�Է¹��� ���� : " << ReadValue(setNumber) << std::endl;
}


int main()
{
	int getNumber;

	std::cout << "������ �Է��ϼ���. : ";
	std::cin >> getNumber;
	WriteValue(getNumber);
}