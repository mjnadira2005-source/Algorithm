// In the name of Allah, who is the most merciful.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[100][100], b[100][100], c[100][100];
    int i, j, k, r1, c1, r2, c2;

    cin >> r1 >> c1;

    for(i=0; i<r1; i++) {
        for(j=0; j<c1; j++) {
            cin >> a[i][j];
        }
    }

    cin >> r2 >> c2;

    for(i=0; i<r2; i++) {
        for(j=0; j<c2; j++) {
            cin >> b[i][j];
        }
    }

    if(c1 != r2) {
        cout << "Invalid" << endl;
        return 0;
    }

    for(i=0; i<r1; i++) {
        for(j=0; j<c2; j++) {
            c[i][j] = 0;

            for(k=0; k<c1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for(i=0; i<r1; i++) {
        for(j=0; j<c2; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}