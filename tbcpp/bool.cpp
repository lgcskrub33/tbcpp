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

	constexpr int my_const(123); //컴파일시에 const 결정되는지 확실히 체크하겠다는 키워드 
	//아래처럼 런타임시 const 되는거하면 안됨 둘을 구분해주기 위해 나온 키워드
	//int number;
	//cin >> number;
	//constexpr int special_number(number);

	cout << "원의 넓이는 : " << 3 * myConstant::PI << endl;


	return 0;

}