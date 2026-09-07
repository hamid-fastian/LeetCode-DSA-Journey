#include<iostream>
#include<vector>
using namespace std;

int SearchInsert(vector<int>& nums, int target)
{
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] == target)
		{                                        
			return i;
		}
		else if (nums[i] > target)
		{
			return i;
		}
	}
	return nums.size();
}

int main()
{
	int target;
	vector<int> num = { 1,4,5,7 };
	cout << "Enter  target value:";
	cin >> target;
	int k = SearchInsert(num, target);
	cout << "Index = " << k << endl;
	system("pause");
	return 0;
}
