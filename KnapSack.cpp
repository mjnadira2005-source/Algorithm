// In the name of Allah, who is the most merciful.

#include <bits/stdc++.h>
using namespace std;

int findMax(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int knapsack(int W,int wt[],int val[],int n){
    int K[n+1][W+1];
    for(int i=0;i<=n;i++){
        for(int w=0;w<=W;w++){
            if(i==0||w==0){
                K[i][w]=0;
            }
            else if(wt[i-1]<=w){
                K[i][w]=findMax(
                    val[i-1]+K[i-1][w-wt[i-1]],
                    K[i-1][w]
                );
            }
            else{
                K[i][w]=K[i-1][w];
            }
        }
    }
    int maxProfit=K[n][W];
     cout<<"Maximum Profit achieved with this knapsack : "<<maxProfit<<endl;
     cout<<"Selected items : ";
    for(int i=n;i>0&&maxProfit>0;i--){
        if(maxProfit==K[i-1][W]){
            continue;
        }
        else{
            cout<<i<<" ";
            maxProfit=maxProfit-val[i-1];
            W=W-wt[i-1];
        }
    }
    return K[n][W];
}
int main(){

    int val[]={70,20,50};
    int wt[]={11,12,13};

    int W=30;

    int n=sizeof(val)/sizeof(val[0]);

    int maxProfit=knapsack(W,wt,val,n);

    return 0;
}