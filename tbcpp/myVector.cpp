#include <iostream>
#include <vector>

using namespace std;

int myVector()
{
	// std::array<int, 5> array; //array�� ��� ����� �ݵ�� �����־���. 

	//int* my_arr = new int[5]; //�����Ҵ����� �ݵ��� delete �־���ϴµ� vector�� �׷��ʿ���� �޸� ���̾���
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

	//std::vector<int> array4 { 1,2,3, }; //�������̴ϼȶ������̼�
	//cout << array4.size() << endl;

	string a = "abc";

	vector<string> vec;
	vec.push_back(a);
	vec.push_back("def");
	/*
	void push_back (const value_type& val); //L value �� ������ ������ copy �� �Ͼ
	void push_back (value_type&& val); // C++ 11���� ��� R velue
	*/

	vec.emplace_back("gogogo");
	/*
	template <class... Args>
	void emplace_back (Args&&... args); //R value �ε� move�� �Ͼ�� �ʴ´��� ��
	*/

	for (auto& vecStr : vec)
	{
		cout << vecStr << endl;
	}

	return 0;

}