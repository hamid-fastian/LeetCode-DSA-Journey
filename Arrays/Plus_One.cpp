#include<iostream>
#include<vector>
using namespace std;

vector<int> PlusOne(vector<int>& digits)
{
	int r, q;
	for (int i = 0; i < digits.size(); i++)
	{
		if (i == digits.size() - 1)
		{
			if (digits[i] + 1 >= 10)
			{
				if (digits.size() == 1 )
				{
					r = (digits[i] + 1) % 10;
					q = (digits[i] + 1) / 10;
					digits[i] = q;
					digits.push_back(r);
					break;
				}
				else
				{
					while (digits[i] >= 9)
					{
						r = (digits[i] + 1) % 10;
						q = (digits[i] + 1) / 10;
						digits[i] = r;
					    digits[i - 1] += q;
						i--;

					};
					break;
				}
				

			}
			else 
			{
				digits[i] += 1;
			}
				
		}
	}
	return digits;
}

int main()
{
	vector<int> nums = {1,9,9};
	vector<int> vec = PlusOne(nums);
	cout << "Resulted integer: ";
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i];
	}
	cout << endl;
	system("pause");
	return 0;
}
