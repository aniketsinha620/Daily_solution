#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 3);
        if (arr[1] != arr[2])
        {
            if ((arr[2] - arr[1]) % 2 == 0)
            {
                if (arr[0] == arr[1])
                {
                    cout << (arr[2] - arr[1]) / 2 << endl;
                }
                else if (arr[0] != arr[1] && ((arr[1] - arr[0]) % 2 == 0))
                    cout << arr[1] - arr[0] + ((arr[2] - arr[1]) / 2) << endl;
                else
                    cout << "-1" << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }

        else if (arr[1] == arr[2])
        {
            if ((arr[2] - arr[1]) % 2 == 0)
            {
                if (arr[0] == arr[1])
                {
                    cout << "0" << endl;
                }
                else if (arr[0] != arr[1] && ((arr[1] - arr[0]) % 2 == 0))
                    cout << arr[1] - arr[0] + ((arr[2] - arr[1]) / 2) << endl;
                else
                    cout << "-1" << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
       
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
