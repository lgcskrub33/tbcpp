#include <iostream>
using namespace std;

void basic()
{
	cout << "this is first \t avenger!!" << std::flush; //endl은 버퍼끝까지 다 출력 (\n과는 다름 더좋음) 뒤 개행 flush는 버퍼끝까지 출력만, 개행은안함

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