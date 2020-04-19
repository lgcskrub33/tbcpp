#include <iostream>
#include <vector>
//#include <string>


using namespace std;

int main()
{
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

	




	/*std::vector<int> first;
	std::vector<int> second(4, 100);
	std::vector<int> third(second.begin(), second.end());
	std::vector<int> fourth(third);

	int myints[]{ 16,2,77,29 };
	std::vector<int> fifth


	first.assign(7, 100);

	cout << first[0] << endl;*/


	return 0;

}