#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &arr)
    {
        int n = arr.size() - 1;
        int i = 0, j = n, ans = 0;
        while (i < j)
        {
            int width = j - i;
            int height = min(arr[i], arr[j]);
            int area = width * height;
            ans = max(ans, area);
            if (arr[i] < arr[j])
                i++;
            else
                j--;
        }
        return ans;
    }
};

int main()
{
    Solution solution;
    vector<int> arr = {1, 8, 6, 2, 5, 4, 8, 3, 7}; // You can change this array as needed

    int max_area = solution.maxArea(arr);

    cout << "Maximum Area: " << max_area << endl;

    return 0;
}
