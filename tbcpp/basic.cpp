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

	//after c++ 14 binary literal 

	int x = 0b1010;
	int x1 = 0b1010'10101010'1010'1111'0000'11010101010'11; //사람이 읽기 편하라고 쿼텐션 마크넣을 수 있음

	cout << x << endl;
	cout << x1 << endl;

	constexpr int my_const(123); //컴파일시에 const 결정되는지 확실히 체크하겠다는 키워드 
	//아래처럼 런타임시 const 되는거하면 안됨 둘을 구분해주기 위해 나온 키워드
	//int number;
	//cin >> number;
	//constexpr int special_number(number);


}

//파라미터에 const 넣는이유 아래의 my_number의 경우 해당 값을 함수 내부에서 변경 불가능하게 하기 위하여
void printNumber(const int my_number)
{
	//my_number=456;
	cout << my_number << endl;
}