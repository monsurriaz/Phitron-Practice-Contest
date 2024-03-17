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
        vector<int> frq(n+5, 0);

        for (int i = 0; i<n; i++)
        {
            cin >> v[i];
            frq[v[i]]++;
        }

        int cnt = 0, idx;
        for (int i = 1; i <= n; i++)
        {
            if (frq[i] >= cnt)
            {
                cnt = frq[i];
                idx = i;
            }
        }

        if (cnt >= 3)
            cout << idx << endl;
        else
            cout << -1 << endl;
    }
    
    return 0;
}