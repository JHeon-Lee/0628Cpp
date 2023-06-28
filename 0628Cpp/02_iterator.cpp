#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>

using namespace std;

int main()
{
	// vector
	{
		vector<int> container;
		for (int i = 0; i < 10; i++)
			container.push_back(i);

		std::vector<int>::iterator iter; // iterator 의 자료형, 선언 --> 포인터처럼 사용
		iter = container.begin(); // 첫번째 요소를 가리키는 반복자

		while (iter != container.end()) // end : 마지막의 한칸 뒤 리턴
		{
			cout << *iter << " ";
			++iter;
		}
		cout << endl;

		// std::vector<int>::iterator --> 쓰기 겁나 귀찮음 --> auto
		for (auto iter = container.begin(); iter != container.end(); iter++) // 위랑 같음
			cout << *iter << " ";
		cout << endl;
	}

	// list
	{
		list<int> container;
		for (int i = 0; i < 10; i++)
			container.push_back(i);

		for (auto iter = container.begin(); iter != container.end(); iter++)
			cout << *iter << " ";
		cout << endl;
	}// 일반화로 vector -> list로만 변경해서 모두 사용 가능

	// set
	{
		set<int> container;
		for (int i = 0; i < 10; i++)
			container.insert(i);

		for (auto iter = container.begin(); iter != container.end(); iter++)
			cout << *iter << " ";
		cout << endl;
	}

	// map
	{
		map<int, char> container;
		for (int i = 0; i < 10; i++)
			container.insert(make_pair(i, i + 32)); // 해당하는 아스키 코드

		for (auto iter = container.begin(); iter != container.end(); iter++)
			cout << iter->first << " : " << iter->second << " ";
		cout << endl;

		// find 함수 써보기
		int answer;

		for (auto iter = container.begin(); iter != container.end(); iter++)
		{
			cin >> answer;

			if (container.find(answer) != container.end())
				cout << container.find(answer)->first << " " << container.find(answer)->second;
			else
				break;
		}
	}

	return 0;
}