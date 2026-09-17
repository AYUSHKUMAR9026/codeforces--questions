#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;
        int x = n / w;
        n = n - x;
        cout << n << "\n";
    }
    return 0;
}