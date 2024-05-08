#include<iostream>
using namespace std;
class Set
{
private:
	int* p;
	int size;
public:
	Set() { p = NULL; size = 0; }
	Set(const Set& S)
	{
		if (S.size == 0)
		{
			p = NULL;
			size = 0;
		}
		else
		{
			size = S.size;
			p = new int[size];
			for (int i = 0; i < size; i++)
			{
				p[i] = S.p[i];
			}
		}
	}
	~Set() 
	{
		if (size != 0)
		{
			delete[] p;
			size = 0;
		}
	}
	bool contains(int value);
	void resize();
	void add(int i)
	{
		if (contains(i))
			return;
		resize();
		size++;
		p[size - 1] = i;
	}
	void print()
	{
		for (int i = 0; i < size; i++)
			cout << p[i] << endl;
	}
};
bool Set::contains(int value)
{
	for (int i = 0; i < size; i++)
		if (p[i] == value)
			return true;
	return false;
}
void Set::resize()
{
	int* t = new int[size + 1];
	for (int i = 0; i < size; i++)
		t[i] = p[i];
	delete[] p;
	p = t;
}
int main()
{
	Set s;
	s.add(1);
	s.add(2);
	s.add(3);
	s.add(1);

	s.print();
	Set cs(s);
	cs.print();
	return 0;
}
