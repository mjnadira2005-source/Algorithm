// In the name of Allah, who is the most merciful.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, a[100], c[100] = {0};
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i];
    } 
    int mx=a[0];
    for(i=1;i<n;i++){
        if(a[i]>mx){
            mx = a[i];
        }
    }
    for(i=0;i<n;i++){
        c[a[i]]++;
    } 
    for(i=0;i<n;i++){
        while(c[i]>0){
            cout << i << :
            c[i]--;
        }
    }
    return 0;
}