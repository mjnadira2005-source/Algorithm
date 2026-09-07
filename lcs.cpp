// In the name of Allah, who is the most merciful.

#include <bits/stdc++.h>
using namespace std;

int main() {
    string x, y;
    cin >> x >> y;
    int n = x.size();
    int m = y.size();
    int dp[100][100];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (x[i - 1] == y[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    cout << "LCS Length = " << dp[n][m] << endl;
    int i = n, j = m;
    string lcs = "";
    while (i > 0 && j > 0) {
        if (x[i - 1] == y[j - 1]) {
            lcs += x[i - 1];
            i--;
            j--;
        }
        else if (dp[i - 1][j]>dp[i][j - 1])
            i--;
        else
            j--;
    }
    reverse(lcs.begin(), lcs.end());
    cout << "LCS = " << lcs << endl;
    return 0;
}