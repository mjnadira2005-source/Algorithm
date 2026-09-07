// In the name of Allah, who is the most merciful.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cin >> key;
    int l = 0, r = n - 1, found = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == key)
        {
            found = mid;
            break;
        }
        else if (a[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    if (found != -1)
    {
        cout << "Element found at index" << " " << found << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    return 0;
}