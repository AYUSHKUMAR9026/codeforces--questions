#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int red = 0;
        int blue = 0;

        int len = 2 * n;

        for (int i = 0; i < len; i++)
        {
            if (s[i] == '0')
                continue;

            int next = (i + 1) % len;

            if (s[next] == '0')
            {
                // Potato moves to the next player.
                // The next player is the opposite team.
                if (i % 2 == 0)
                    red++;
                else
                    blue++;
            }
            else
            {
                // Potato stays at current player.
                if (i % 2 == 0)
                    blue++;
                else
                    red++;
            }
        }

        cout << red << " " << blue << '\n';
    }

    return 0;
}