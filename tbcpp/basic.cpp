#include <iostream>
using namespace std;

void basic()
{
	cout << "this is first \t avenger!!" << std::flush; //endl�� ���۳����� �� ��� (\n���� �ٸ� ������) �� ���� flush�� ���۳����� ��¸�, ����������

	// Type Casting
	// C-style casting 
	cout << (char)65 << endl;
	cout << (int)'A' << endl;

	// Cpp style casting
	cout << char(65) << endl;
	cout << int('A') << endl;

	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;

	//after c++ 14 binary literal 

	int x = 0b1010;
	int x1 = 0b1010'10101010'1010'1111'0000'11010101010'11; //����� �б� ���϶�� ���ټ� ��ũ���� �� ����

	cout << x << endl;
	cout << x1 << endl;

	constexpr int my_const(123); //�����Ͻÿ� const �����Ǵ��� Ȯ���� üũ�ϰڴٴ� Ű���� 
	//�Ʒ�ó�� ��Ÿ�ӽ� const �Ǵ°��ϸ� �ȵ� ���� �������ֱ� ���� ���� Ű����
	//int number;
	//cin >> number;
	//constexpr int special_number(number);


}

//�Ķ���Ϳ� const �ִ����� �Ʒ��� my_number�� ��� �ش� ���� �Լ� ���ο��� ���� �Ұ����ϰ� �ϱ� ���Ͽ�
void printNumber(const int my_number)
{
	//my_number=456;
	cout << my_number << endl;
}