#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <queue>
#include <string>

using namespace std;

int main()
{
    string m;
    cin >> m;

    vector<int> nums;

    cout << m << "\n";

    for (int i = 0; i < m.size(); ++i)
    {
        nums.push_back(m[i] - '0');
    }

    while (nums.size() > 2)
    {
        int last = nums[nums.size() - 1];
        nums.pop_back();

        int pos;

        if (nums[nums.size() - 1] < last)
        {
            for (int i = nums.size() - 2; i >= 0; --i)
            {
                if (nums[i] > 0)
                {
                    pos = i;
                    break;
                }
            }
            if (pos == 0 and nums[pos] == 1)
            {
                nums[nums.size() - 2] = 10 + nums[nums.size() - 1] - last;
                nums[pos] = 10;
                nums.pop_back();
            }
            else
            {
                nums[nums.size() - 1] = 10 + nums[nums.size() - 1] - last;
            }
            nums[pos]--;
            for (int i = nums.size() - 2; i > pos; --i)
                nums[i] = 9;
        }
        else
        {
            nums[nums.size() - 1] -= last;
        }

        for (int i = 0; i < nums.size(); ++i)
        {
            cout << nums[i];
        }
        cout << "\n";
    }

    if (nums.size() > 1)
    {
        if ((nums[0] * 10 + nums[1]) % 11 == 0)
        {
            cout << "The number " << m << " is divisible by 11.";
        }
        else
        {
            cout << "The number " << m << " is not divisible by 11.";
        }
    }
    else
    {
        cout << "The number " << m << " is not divisible by 11.";
    }

    return 0;
}
