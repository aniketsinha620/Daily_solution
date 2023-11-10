// Om has an array A of size N and an integer B.
// He wants to find whether there exists a non-empty subsequence of A such that the bitwise AND of all elements in the subsequence is equal to B.
// 2
// 6 5
// 1 7 3 4 2 13
// 3 2
// 1 3 4

// YES
// NO

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, b;
        cin >> n >> b;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> p;

        for (int i = 0; i < n; i++)
        {
            if ((arr[i] & b )== b)
            {  
               
                p.push_back(arr[i]);
               
            }
        }

        if (p.size())
        {
            int ans = p[0];
            for (int i = 1; i < p.size(); i++)
            {
                ans = ans & p[i];
            }

            if (ans == b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
