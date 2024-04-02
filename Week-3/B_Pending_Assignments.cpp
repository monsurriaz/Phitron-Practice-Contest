/*
    author: monsur_riaz
    created: 2024-04-02 22:35:25"
*/

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
        float x, y, z;
        cin >> x >> y >> z;

        if((x * y)/60.0/24.0 <= z)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}