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
        string a, b;
        cin >> a >> b;
        vector<int> evenA, evenB, oddA, oddB;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                if (i % 2 == 0)
                {
                    evenA.push_back(i);
                }
                else
                {
                    oddA.push_back(i);
                }
            }
            if (b[i] == '1')
            {
                if (i % 2 == 0)
                {
                    evenB.push_back(i);
                }
                else
                {
                    oddB.push_back(i);
                }
            }
        }
        if (evenA.size() != evenB.size() || oddA.size() != oddB.size())
        {
            cout << -1 << "\n";
        }
        else
        {
            int ans = 0;
            for (int i = 0; i < evenA.size(); i++)
            {
                ans += abs(evenB[i] - evenA[i]);
            }
            for (int i = 0; i < oddA.size(); i++)
            {
                ans += abs(oddB[i] - oddA[i]);
            }
            ans /= 2;
            cout << ans << "\n";
        }
    }
    return 0;
}