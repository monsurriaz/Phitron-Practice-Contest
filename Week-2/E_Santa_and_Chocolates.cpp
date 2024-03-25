#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        if (sum < n)
            cout << "NO" << '\n';
        else if (sum%n != 0 && k == 0)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
    return 0;
}
