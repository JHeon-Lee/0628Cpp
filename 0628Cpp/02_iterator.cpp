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

		std::vector<int>::iterator iter; // iterator �� �ڷ���, ���� --> ������ó�� ���
		iter = container.begin(); // ù��° ��Ҹ� ����Ű�� �ݺ���

		while (iter != container.end()) // end : �������� ��ĭ �� ����
		{
			cout << *iter << " ";
			++iter;
		}
		cout << endl;

		// std::vector<int>::iterator --> ���� �̳� ������ --> auto
		for (auto iter = container.begin(); iter != container.end(); iter++) // ���� ����
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
	}// �Ϲ�ȭ�� vector -> list�θ� �����ؼ� ��� ��� ����

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
			container.insert(make_pair(i, i + 32)); // �ش��ϴ� �ƽ�Ű �ڵ�

		for (auto iter = container.begin(); iter != container.end(); iter++)
			cout << iter->first << " : " << iter->second << " ";
		cout << endl;

		// find �Լ� �Ẹ��
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