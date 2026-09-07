// In the name of Allah, who is the most merciful.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,j;
    cin >> n;
    int start[100], finish[100], activity[100];
    for(i=0;i<n;i++){
        activity[i] = i+1;
        cin >> start[i] >> finish[i];
    } 
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(finish[j]>finish[j+1]){
                int temp = finish[j];
                finish[j] = finish[j+1];
                finish[j+1] = temp;
                temp = start[j];
                start[j] = start[j+1];
                start[j+1] = temp;
                temp = activity[j];
                activity[j] = activity[j + 1];
                activity[j + 1] = temp;
              
            }
    }
}
       cout << "Activity " << activity[0] << ": "<< start[0] << " " << finish[0] << endl;
        int last=finish[0];
        for(i=1;i<n;i++){
            if(start[i]>=last){
             cout << "Activity " << activity[i] << ": "<< start[i] << " " << finish[i] << endl;
            last=finish[i];

        }
}
 return 0;
}