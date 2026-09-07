// In the name of Allah, who is the most merciful.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i,j, capacity;
    cin >> n >> capacity;
    int profit[100],weight[100];
    for(i=0;i<n;i++){
        cin >> profit[i]>>weight[i];
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if((double)profit[i]/weight[i]<(double)profit[j]/weight[j])
            {
                swap(profit[i], profit[j]);
                swap(weight[i], weight[j]);
            }

        }

    }
    double total = 0;
    for(int i=0;i<n;i++)
    {
        if(capacity>=weight[i])
        {
            capacity=capacity- weight[i];
            total=total+profit[i];
        }
        else
        {
            total=total+profit[i]*(double)capacity/weight[i];
            break;
        }
    }
    cout << "Maximum Profit = " << total << endl;
    return 0;
}