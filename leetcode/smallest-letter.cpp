#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char nextGreatestLetter(vector<char> &letters, char target)
{
    for (char el : letters)
    {
        if (el > target)
        {
            return el;
        }
    }
    return letters[0];
}

int main()
{
    vector<char> letters = {'d', 'f', 'j'};
    char target = 'a';
    cout << nextGreatestLetter(letters, target);
    return 0;
}

/**
 * @brief https://leetcode.com/problems/find-smallest-letter-greater-than-target/
 *
 */