#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a;
        cin >> a;
        int first = 0, second = 0;
        for (int i=0, j=5; i<j; i++, j--)
        {
            first += a[i]-'0';
            second += a[j]-'0';
        }

        if (first == second)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
