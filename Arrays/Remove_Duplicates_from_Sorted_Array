#include<iostream>
#include<vector>
using namespace std;

int RemoveDuplicates(vector<int>& n)
{
    int c = 0;
    bool exist = false;

    for (int i = 0; i < n.size(); i++)
    {
        exist = false;

        for (int j = 0; j < c; j++)
        {
            if (n[i] == n[j])
            {
                exist = true;
                break;
            }
        }

        if (!exist)
        {
            n[c] = n[i];
            c++;
        }
    }

    return c;
}

int main()
{
    vector<int> num = { 0,0,1,1,1,1,2,2,4,4,5 };

    int k = RemoveDuplicates(num);

    cout << "Total Numbers: " << k << endl;

    cout << "Unique numbers: ";
    for (int i = 0; i < k; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}
