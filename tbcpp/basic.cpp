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

}