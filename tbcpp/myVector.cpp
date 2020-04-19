#include <iostream>
#include <vector>

using namespace std;

int myVector()
{
	// std::array<int, 5> array; //array의 경우 사이즈를 반드시 적어주었음. 

	//int* my_arr = new int[5]; //동적할당했음 반듯이 delete 있어야하는데 vector는 그럴필요없음 메모리 릭이없음
	//delete[] my_arr;
	vector<int> arr = { 1,2,3,4,5 };
	arr.resize(2);

	for (auto& itr : arr)
	{
		cout << itr << "  ";
	}
	cout << endl;

	cout << arr.size() << endl;


	//std::vector<int> array;

	//std::vector<int> array2 = { 1,2,3,4,5 };

	//cout << array2.size() << endl;

	//std::vector<int> array3 = { 1, 2, 3, };

	//cout << array3.size() << endl;

	//std::vector<int> array4 { 1,2,3, }; //유니폼이니셜라이제이션
	//cout << array4.size() << endl;

	string a = "abc";

	vector<string> vec;
	vec.push_back(a);
	vec.push_back("def");
	/*
	void push_back (const value_type& val); //L value 로 받으니 힙에서 copy 함 일어남
	void push_back (value_type&& val); // C++ 11부터 사용 R velue
	*/

	vec.emplace_back("gogogo");
	/*
	template <class... Args>
	void emplace_back (Args&&... args); //R value 인데 move도 일어나지 않는다함 굿
	*/

	for (auto& vecStr : vec)
	{
		cout << vecStr << endl;
	}

	return 0;

}