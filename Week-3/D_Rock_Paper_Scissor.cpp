/*
    author: monsur_riaz
    created: 2024-04-02 23:05:24"
*/

#include <bits/stdc++.h>
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
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
        string s1, s2;
        cin >> s1 >> s2;

        int cf = 0, cfn = 0;

        for(int i = 0; i < n; i++)
        {
            if(s1[i] == s2[i]) continue;

            if(s1[i] == 'R' && s2[i] == 'S')
                cf++;
            else if(s1[i] == 'S' && s2[i] == 'P')
                cf++;
            else if(s1[i] == 'P' && s2[i] == 'R')
                cf++;
            else if(s2[i] == 'R' && s1[i] == 'S')
                cfn++;
            else if(s2[i] == 'S' && s1[i] == 'P')
                cfn++;
            else if(s2[i] == 'P' && s1[i] == 'R')
                cfn++;
        }

        if(cf > cfn)
            cout << 0 << nl;
        else if(cf == cfn)
            cout << 1 << nl;
        else
            cout << ((cfn-cf)/2)+1 << nl;
    }
    return 0;
}
