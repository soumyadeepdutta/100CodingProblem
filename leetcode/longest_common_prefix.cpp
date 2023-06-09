#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

string longestCommonPrefixW(vector<string> &strs)
{
    string res = "";
    if (strs.empty())
        return res;
    for (int i = 0; i < strs[0].length(); i++)
    {
        for (string s : strs)
        {
            if (strs[0][i] != s[i])
            {
                return res;
            }
        }
        res += strs[0][i];
    }
    return res;
}

string longestCommonPrefix(vector<string> &strs)
{
    // sort lexicographycally (in a way that relates to dictionaries)
    sort(strs.begin(), strs.end());
    string ans = "";

    // find the end string
    int n = strs.size();

    // compare only first and last. because substring should be present in all
    for (int i = 0; i < min(strs[0].size(), strs[n - 1].size()); i++)
    {
        if (strs[0][i] == strs[n - 1][i])
        {
            ans += strs[0][i];
        }
        else
        {
            break;
        }
    }
    return ans;
}

int main()
{
    vector<string> a = {"flqower", "fllow", "flight"};
    string resW = longestCommonPrefixW(a);
    string res = longestCommonPrefix(a);
    cout << res;
}