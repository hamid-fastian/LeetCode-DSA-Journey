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
	vector<int> num = { 3,1,1,4,2,2,3 };
	cout << "Single Value:" << SingleNumber(num) << endl;
	system("pause");
	return 0;
}
