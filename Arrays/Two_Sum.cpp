#include<iostream>
#include<vector>
using namespace std;


vector<int> TwoSum(vector<int>& num,int target)
{
	for (int i = 0; i < num.size(); i++)
	{
		for (int j = i + 1; j < num.size(); j++)
		{
			if (num[i] + num[j] == target)
			{
				return { i,j };
			}
		}
	}
}


int main()
{
	vector<int> arr= {1,2,7,11,10};
	int target;
	cout << "Enter target Value:";
	cin >> target;
	vector<int> result= TwoSum(arr,target);
	if (!result.empty())
	{
		cout << "[" << result[0] << "," << result[1] << "]" << endl;
	}
	else
	{
		cout << "No Pair found" << endl;
	}
	system("pause");
	return 0;
}
