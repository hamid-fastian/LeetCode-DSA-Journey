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
                if (digits.size() == 1)
                {
                    r = (digits[i] + 1) % 10;
                    q = (digits[i] + 1) / 10;

                    digits[i] = q;
                    digits.push_back(r);

                    break;
                }
                else
                {
                    r = (digits[i] + 1) % 10;
                    q = (digits[i] + 1) / 10;

                    digits[i] = r;

                    int j = i - 1;

                    while (j >= 0 && q > 0)
                    {
                        if (digits[j] + q >= 10)
                        {
                            digits[j] = (digits[j] + q) % 10;
                            q = 1;
                            j--;
                        }
                        else
                        {
                            digits[j] += q;
                            q = 0;
                        }
                    }

                    if (q > 0)
                    {
                        digits.insert(digits.begin(), q);
                    }

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
