// In the name of Allah, who is the most merciful.

#include <bits/stdc++.h>
using namespace std;

int rodCutting(int price[], int n, int cut[]) {
    int dp[n + 1];
    dp[0] = 0;
    for(int i = 1; i <= n; i++) {
        dp[i] = 0;
        for(int j = 1; j <= i && j<=4; j++) {
            int revenue = price[j-1]+dp[i-j];
            if(revenue>dp[i]){
            dp[i] = revenue;
            cut[i] = j;
        }
        }
    }
    return dp[n];
}

int main() {
    int price[] = {2, 3, 6, 9};
    int n = 4;
    int cut[n + 1];
    int maximumRevenue = rodCutting(price, n, cut);
    cout << "Maximum Revenue = " << maximumRevenue << endl;
    int remaining = n;
    while(remaining>0){
        cout << cut[remaining] << endl;
        remaining = remaining - cut[remaining];
    }
    cout << endl;

    return 0;
}