#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
        {
            if ((x - y) >= 2)
                cout << "CHEF" << endl;
            else
            {
                if (y % 2 == 0)
                    cout << "CHEFINA" << endl;
                else
                    cout << "CHEF" << endl;
            }
        }

        else if (y > x)
        {
            if ((y - x) >= 2)
                cout << "CHEFINA" << endl;
            else
            {
                if (x % 2 == 0)
                    cout << "CHEFINA" << endl;
                else
                    cout << "CHEF" << endl;
            }
        }
        else
        {
            if (x % 2 == 0 && y % 2 == 0)
                cout << "CHEFINA" << endl;
            else
            {
                cout << "CHEF" << endl;
            }
        }
    }
    return 0;
}
