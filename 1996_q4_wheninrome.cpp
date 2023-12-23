#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<char, int> numerals = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}};

    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        int curr = 0;
        int past = 0;
        int sum = 0;

        for (int j = 0; j < s.size() - 1; ++j)
        {

            if (s[j] != '+' and s[j - 1] != '+')
            {
                past = curr;
                curr = numerals[s[j]];
                if (past < curr and past != 0)
                    sum += curr - 2 * past;
                else
                    sum += curr;
            }
            else if (s[j] != '+')
            {
                curr = numerals[s[j]];
                sum += curr;
            }
            else
            {
                curr = 0;
                past = 0;
            }
        }
        cout << s;
        if (sum >= 1000)
            cout << "CONCORDIA CUM VERITATE";
        else
        {
            while (sum > 0)
            {
                if (sum >= 900)
                {
                    cout << "CM";
                    sum -= 900;
                }
                else if (sum >= 500)
                {
                    cout << "D";
                    sum -= 500;
                }
                else if (sum >= 400)
                {
                    cout << "CD";
                    sum -= 400;
                }
                else if (sum >= 300)
                {
                    cout << "CCC";
                    sum -= 300;
                }
                else if (sum >= 200)
                {
                    cout << "CC";
                    sum -= 200;
                }
                else if (sum >= 100)
                {
                    cout << "C";
                    sum -= 100;
                }
                else if (sum >= 90)
                {
                    cout << "XC";
                    sum -= 90;
                }
                else if (sum >= 80)
                {
                    cout << "LXXX";
                    sum -= 80;
                }
                else if (sum >= 70)
                {
                    cout << "LXX";
                    sum -= 70;
                }
                else if (sum >= 60)
                {
                    cout << "LX";
                    sum -= 60;
                }
                else if (sum >= 50)
                {
                    cout << "L";
                    sum -= 50;
                }
                else if (sum > 40)
                {
                    cout << "XL";
                    sum -= 40;
                }
                else if (sum >= 30)
                {
                    cout << "XXX";
                    sum -= 30;
                }
                else if (sum >= 20)
                {
                    cout << "XX";
                    sum -= 20;
                }
                else if (sum >= 10)
                {
                    cout << "X";
                    sum -= 10;
                }
                else if (sum >= 9)
                {
                    cout << "IX";
                    sum -= 9;
                }
                else if (sum >= 8)
                {
                    cout << "VIII";
                    sum -= 8;
                }
                else if (sum >= 7)
                {
                    cout << "VII";
                    sum -= 7;
                }
                else if (sum >= 6)
                {
                    cout << "VI";
                    sum -= 6;
                }
                else if (sum >= 5)
                {
                    cout << "V";
                    sum -= 5;
                }
                else if (sum >= 4)
                {
                    cout << "IV";
                    sum -= 4;
                }
                else if (sum >= 3)
                {
                    cout << "III";
                    sum -= 3;
                }
                else if (sum >= 2)
                {
                    cout << "II";
                    sum -= 2;
                }
                else if (sum >= 1)
                {
                    cout << "I";
                    sum -= 1;
                }
            }
            cout << "\n";
        }
    }

    return 0;
}
