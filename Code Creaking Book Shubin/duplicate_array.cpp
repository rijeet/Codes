#include <bits/stdc++.h>
using namespace std;

vector<int> duplicate(vector<int> &nums)
{
       
    vector<int> uniq;
    int cnt = 1; // 1st index nums[0] counted
    
    uniq.push_back(nums[0]); // 1st index nums[0] counted

    for (int i = 1; i < nums.size(); i++)
    {
        // sorted array
        if (nums[i] != nums[i - 1])
        {
            uniq.push_back(nums[i]);
            cnt += 1;
        }
    }

    return uniq;
}

int main()
{
    vector<int> arr = {1};
    vector<int> c = duplicate(arr);
    for (int i = 0; i < c.size(); i++)
    {
        cout<<c[i]<<" ";
    }
    
}