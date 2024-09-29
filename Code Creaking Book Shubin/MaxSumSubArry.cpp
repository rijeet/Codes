#include <bits/stdc++.h>
using namespace std;

int MaximunArraySum(vector<int> &nums)
{
    int maxSum = INT_MIN;
    int carrySum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        carrySum += nums[i];
        if (carrySum < 0)
            carrySum = 0;

        maxSum = max(maxSum, carrySum);
    }
    return maxSum;
}

int main()
{
    vector<int> arr = {-1, -2, 1, 2, 3, -5, 4, 5};
    cout << MaximunArraySum(arr) << "\n";
}