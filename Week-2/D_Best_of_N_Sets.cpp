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
        int x, y;
        cin >> x >> y;
        int diff = abs(x - y);

        cout << x + y + diff -1 << '\n';
    }
    return 0;
}