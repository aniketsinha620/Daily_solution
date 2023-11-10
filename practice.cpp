#include <iostream>
#include <vector>
#include <deque>
#include <utility>

using namespace std;

class Solution
{
public:
	vector<int> restoreArray(vector<vector<int>> &arr)
	{
		deque<int> q;
		int n = arr.size();
		int front = arr[0][0];
		int back = arr[0][1];
		q.push_back(arr[0][0]);
		q.push_back(arr[0][1]);
		vector<pair<int, int>> v;
		bool verify = false;
		if (n > 1)
		{
			for (int i = 1; i < n; i++)
			{
				if (front == arr[i][0] || front == arr[i][1])
				{
					int temp = (front != arr[i][0]) ? arr[i][0] : arr[i][1];
					front = temp;
					q.push_front(front);
				}
				else if (back == arr[i][0] || back == arr[i][1])
				{
					int temp = (back != arr[i][0]) ? arr[i][0] : arr[i][1];
					back = temp;
					q.push_front(back);
				}
				else
				{
					v.push_back(make_pair(arr[i][0], arr[i][1]));
				}
				if (v.size())
				{
					

					for (int i = 0; i < v.size(); i++)
					{
						if (v[i].first == front || v[i].second == front)
						{
							int temp = (front != v[i].first) ? v[i].first : v[i].second;
							front = temp;
							q.push_front(front);

							v.erase(v.begin());
						}
						else if (v[i].first == back || v[i].second == back)
						{
							int temp = (back != v[i].first) ? v[i].first : v[i].second;
							back = temp;
							q.push_front(back);
							v.erase(v.begin());
						}
					}
				}

				
			}
		}

		vector<int> ans;
		for (const auto &ele : q)
		{
			ans.push_back(ele);
		}
		return ans;
	}
};

int main()
{
	Solution solution;
	vector<vector<int>> arr = {{2, 1}, {3, 4}, {3, 2}};

	vector<int> result = solution.restoreArray(arr);

	// Display the result
	cout << "Restored Array: ";
	for (const auto &ele : result)
	{
		cout << ele << " ";
	}
	cout << endl;

	return 0;
}
