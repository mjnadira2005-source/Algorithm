// In the name of Allah, who is the most merciful.

#include <bits/stdc++.h>
using namespace std;

int get_max(int a[], int n){
    int max = a[0];
    for(int i=1;i<n;i++){
       if(a[i]>max){
        max = a[i];
       } 
    } 
    return max;
}


void radix_sort(int a[], int n){
    int max = get_max(a,n);
    for(int exp=1; max/exp>0; exp = exp*10){
        int bucket[10][100];
        int count[10]={0};
        for(int i=0;i<n;i++){
            int digit = (a[i]/exp)%10;
            bucket[digit][count[digit]] = a[i];
            count[digit]++;
        }
        int k = 0;
        for(int i=0;i<10;i++){
            for(int j=0;j<count[i];j++){
                a[k] = bucket[i][j];
                k++;

            }
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
    radix_sort(a,n);
    for(i=0;i<n;i++){
        cout <<  a[i] << " ";
 
    }

    return 0;
}