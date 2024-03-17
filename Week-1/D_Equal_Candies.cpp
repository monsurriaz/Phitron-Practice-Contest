#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int mn = INT_MAX;
        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < mn)
            {
                mn = v[i];
            }
            sum += v[i];
        }

        cout << sum - (1LL*mn*n) << endl;
    }
    return 0;
}
