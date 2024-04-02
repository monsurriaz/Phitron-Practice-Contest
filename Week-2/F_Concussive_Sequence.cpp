/*
    Author: Monsur Rahman Riaz
    Created: 2024-03-25 16:31:45"
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
        int n;
        cin >> n;
        vector<int> v1(n);

        for(int i=0; i<n; i++)
        {
            cin >> v1[i];
        }

        sort(v1.begin(), v1.end());
        vector<int> v2(n,0);

        for (int i=0, j=0; i<(n+1)/2; i++, j+=2)
        {
            v2[j] = v1[i];
        }

        for (int i=((n+1)/2), j=1; i<n; i++, j+=2)
        {
            v2[j] = v1[i];
        }
        bool ok = true;

        for (int i=1; i<n-1; i++)
        {
            if (v2[i-1] > v2[i] && v2[i] < v2[i+1])
            {

            }
            else if (v2[i-1] < v2[i] && v2[i] > v2[i+1])
            {

            }
            else
            {
                ok = false;
                break;
            }
        }

        if(!ok)
        {
            cout << -1;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                cout << v2[i] << " ";
            }
        }

        cout << endl;
    }
    return 0;
}