/*
2024.5.7
使用list容器实现以下操作：
插入、移动和删除数据，并将最终结果打印出来。
*/
#include<iostream>
#include<list>
using namespace std;

void insert(list<int>& l, list<int>::iterator& pointer)
{
	int x;
	cin >> x;
	pointer = l.insert(pointer, x);
}
void move(list<int>& l, list<int>::iterator& pointer)
{
	int d;
	cin >> d;
	if (pointer == l.end())
		return;
	if (d > 0)
	{
		while (d--)
		{
			pointer++;
			if (pointer == l.end())
				return;
		}
	}
	else
	{
		while (d++)
		{
			pointer--;
			if (pointer == l.begin())
				return;
		}
	}
}
void erase(list<int>& l, list<int>::iterator& pointer)
{
	if (pointer == l.end())
		return;
	pointer = l.erase(pointer);
}

int main()
{
	list<int>l;
	list<int>::iterator pointer = l.end();
	int q, op;
	cin >> q;
	while (q--)
	{
		cin >> op;
		switch (op)
		{
		case 0:
			insert(l, pointer);
			break;
		case 1:
			move(l, pointer);
			break;
		case 2:
			erase(l, pointer);
			break;
		}
	}
	list<int>::iterator i = l.begin();
	for (; i != l.end(); i++)
		cout << *i << endl;
}
