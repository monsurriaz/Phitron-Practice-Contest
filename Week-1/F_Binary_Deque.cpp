#include <bits/stdc++.h>
#define ll long long
#define vector vector<ll> 
#define loop(i,s,n) for (int i = s; i <n; i++)
#define sort(v) sort(v.begin(), v.end())
using namespace std;
int main()
{
    // User : AN.Mamun
    // Data : 2024 March 7
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--)
    {
        int n,  sum;
        cin >> n >> sum;

        list<int> l;
        vector v(n);
        int total = 0;
        
        loop(i,0,n)
        {
            cin >> v[i];
            l.push_back(v[i]);
            total += v[i];
        }

        int i = 0;
        while( l.size()>1)
        {
            if(total == sum)break;
            total -= (l.front() + l.back());
            l.pop_back(), l.pop_front();
            i++;
        }

        if(i+1<n/2)
        {        
            for (int k = i + 1; k<n; k++)
            {
                if(v[k] == 1) break;
                i++;
            }
            i++;
        }
        (total == sum)? cout << i << endl : cout << -1 << endl;
    }

    return 0;
}
