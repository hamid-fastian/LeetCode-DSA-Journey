#include<iostream>
#include<vector>
using namespace std;


int RemoveElement(vector<int>& n,int val)
{
	int c = 0;
	for (int i = 0; i < n.size(); i++)
	{
		if (n[i] == val)
		{
			continue;
		}
		else
		{
			n[c] = n[i];
			c++;
		}
	}
	return c;
}

int main()
{
	vector<int> num = { 1, 24, 2, 2, 5, 36, 45, 4, 5, 5,2 };
	int val;
	cout << "Enter Value Which you want to remove:";
	cin >> val;
	int k=RemoveElement(num, val);
	cout << "Total Numbers:" << k << endl;
	cout << "Array after removal Value:";
	for (int i = 0; i < k; i++)
	{
		cout << num[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
