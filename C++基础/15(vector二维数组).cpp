#include<iostream>
#include<vector>
using namespace std;

void dump(int t, vector<vector<int> >& A)
{
	unsigned int i = 0;
	if (A[t].size() == 0)
	{
		cout << endl;
		return;
	}
	for (i = 0; i < A[t].size(); i++)
	{
		cout << A[t][i] << (((i + 1) % A[t].size()) ? " " : "\n");
	}
}

int main()
{
	int n = 0, q = 0;
	cin >> n;
	cin >> q;

	vector<vector<int> > A(n);
	int op = -1;
	int t = -1;
	int x = -1;
	while (q--)
	{
		cin >> op;
		cin >> t;
		switch (op)
		{
		case 0:
		{
			cin >> x;
			A[t].push_back(x);
			break;
		}
		case 1:
			dump(t, A);
			break;
		case 2:
			A[t].clear();
			break;
		}
	}
	return 0;
}
