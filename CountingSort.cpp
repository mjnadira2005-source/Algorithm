// In the name of Allah, who is the most merciful.

#include <bits/stdc++.h>
using namespace std;
int getMax(int a[],int n){
    int max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
void counting_sort(int a[],int n,int max){
    int count[max+1];
    for(int i=0;i<=max;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        count[a[i]]++;
    }
    for(int i=1;i<=max;i++){
        count[i]+=count[i-1];
    }
    int b[n];
    for(int i=n-1;i>=0;i--){
        b[count[a[i]]-1]=a[i];
        count[a[i]]--;
    }
    for(int i=0;i<n;i++){
        a[i]=b[i];
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=getMax(a,n);
    counting_sort(a,n,max);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}