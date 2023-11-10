#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    int j, k;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        int j = i + 1;
        int k = n - 1;
        while (k > j)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                vector<int> v = {arr[i], arr[j], arr[k]};
                ans.push_back(v);
                j++;
                k--;
                while (k > j && arr[k + 1] == arr[k])
                    k--;
                while (k > j && arr[j - 1] == arr[j])
                    j++;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {-1, 0, 1, 2, -1, -4};
    threeSum(v);
    return 0;
}