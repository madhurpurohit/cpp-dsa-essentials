#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

void findLps(vector<int> &lps, string s)
{
    int pre = 0, suf = 1;
    while (suf < s.size())
    {
        if (s[pre] == s[suf])
        {
            lps[suf] = pre + 1;
            pre++;
            suf++;
        }
        else
        {
            if (pre == 0)
            {
                lps[suf] = 0;
                suf++;
            }
            else
                pre = lps[pre - 1];
        }
    }
}

int main()
{
    system("clear");
    string hayStack = "mississippi";
    string needle = "issip";
    // string needle = "ip";
    int n = hayStack.size(), m = needle.size();
    vector<int> prefix(m, 0);

    findLps(prefix, needle);

    int first = 0, second = 0;
    while (first < n)
    {
        if (hayStack[first] == needle[second])
        {
            first++;
            second++;
        }
        else
        {
            if (second == 0)
                first++;
            else
                second = prefix[second - 1];
        }

        if (second == m)
        {
            cout << "Found at index: " << first - second << endl;
            return 0;
        }
    }
    cout << "Not Found" << endl;
    return 0;
}