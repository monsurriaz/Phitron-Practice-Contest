/*
    author: monsur_riaz
    created: 2024-04-02 22:53:14"
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        int cnt = 0;

        if(n >= 2)
        {
            cnt++;
            n-=2;
        }

        cnt += n/7;
        cout << cnt << endl;
    }
    return 0;
}