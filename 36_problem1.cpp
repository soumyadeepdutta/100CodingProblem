// Given an array of integers and a value,
// determine if there are any two integers in the array whose sum is
// equal to the given value. Return true if the sum exists and return false if it does not.
// O(n^2)
#include <iostream>
using namespace std;

int main(void)
{
    int arr[5] = {1, 2, 3};
    int n = 6;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        for (int j = i + 1; j < sizeof(arr) / sizeof(arr[0]) - 1; j++)
        {
            if (arr[i] + arr[j] == n)
            {
                cout << arr[i] << " " << arr[j];
            }
        }
    }
}
