// In the name of Allah, who is the most merciful.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i,key;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> key;
    int pos = -1;
    for(i=0;i<n;i++){
        if(a[i]==key){
            pos = i;
            break;
        }

    }
    if(pos!=-1){
        cout << "Element found at index" << " " << i << endl;
    } 
    else{
        cout << "Element not found" << endl;
    }

    return 0;
}