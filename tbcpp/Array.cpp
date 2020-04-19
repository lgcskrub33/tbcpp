#include <iostream>
#include <array> //array 사용을 위해
#include <algorithm> //sorting 사용을 위해

using namespace std;

void arrayPrint(const array<int, 5>& my_arr)
{
	cout << "array length is " << my_arr.size() << endl;
}

int array_main()
{
	//int arr[5] = { 1, 2, 3, 4, 5 };
	array<int, 5> my_arr = { 1, 23, 3, 44, 5 };

	//arrayPrint(my_arr);
	for (auto& element : my_arr)
	{
		cout << element << "  ";
	}
	cout << endl;


	std::sort(my_arr.rbegin(), my_arr.rend());

	for (auto& element : my_arr)
	{
		cout << element << "  ";

	}
	cout << endl;

	return 0;

}