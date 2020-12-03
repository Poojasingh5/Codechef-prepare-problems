#include <bits/stdc++.h>
using namespace std;

int ans(int n) {
    if (n <= 0)
        return 0;
    return  (n + 1)+ans(n/2)+ans(n-(n/2)-1);
}

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        n=n+1;
         int max = ((n) * (n + 1)) / 2 - 1;
        int length = ans(n-1);
        if (length > m)
            cout << -1 << endl;
        else if (m > max)
            cout << m - max << endl;
        else
            cout << 0 << endl;

    }
    return 0;
}
