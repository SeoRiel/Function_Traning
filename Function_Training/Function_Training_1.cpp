#include <iostream>

// 1. 두개의 double 값을 받아서 큰 값을 반환하는 함수 Max를 작성해 보세요.
double Max(double fNumber, double sNumber)
{
	return fNumber > sNumber ? fNumber : sNumber;
}

int main()
{
	double fDouble, sDouble;

	std::cout << "두 개의 실수를 입력하세요. : ";
	std::cin >> fDouble >> sDouble;
	std::cout << "가장 큰 값은 " << Max(fDouble, sDouble) << "입니다." << std::endl;
}
