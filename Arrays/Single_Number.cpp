#include<iostream>
#include<vector>
using namespace std;


int SingleNumber(vector<int>& num)
{
	int single = 0;
	for (int val : num)
	{
		single ^= val;
	}
	return single;
}

int main()
{
	vector<int> num = {6, 4, 9, 6, 4, 9, 7};
	cout << "Single Value:" << SingleNumber(num) << endl;
	system("pause");
	return 0;
}
