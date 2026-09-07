// In the name of Allah, who is the most merciful.

#include <bits/stdc++.h>
using namespace std;
void shell_sort(int a[], int n){
    for(int gap = n/2;gap>0;gap = gap/2){
        for(int i=gap;i<n;i++){
            int temp = a[i];
            int j = i;
            while(j>=gap && a[j-gap]>temp){
                a[j] = a[j-gap];
                j = j-gap;
            } 
            a[j] = temp;
        }
    }
}
int main() {
    int n, i;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];

    }
    shell_sort(a,n);
    for(i=0;i<n;i++){
        cout << a[i] << " ";

    }
    return 0;
}