#include <iostream>
#include "myConstant.h"
using namespace std;

void printNumber(const int& my_number)
{
	
	cout << my_number << endl;
}

int main()
{

	int number;
	cin >> number;

	const int special_number(number);

	cout << "number is " << number << " special number is " << special_number;

	constexpr int my_const(123); //�����Ͻÿ� const �����Ǵ��� Ȯ���� üũ�ϰڴٴ� Ű���� 
	//�Ʒ�ó�� ��Ÿ�ӽ� const �Ǵ°��ϸ� �ȵ� ���� �������ֱ� ���� ���� Ű����
	//int number;
	//cin >> number;
	//constexpr int special_number(number);

	cout << "���� ���̴� : " << 3 * myConstant::PI << endl;


	return 0;

}