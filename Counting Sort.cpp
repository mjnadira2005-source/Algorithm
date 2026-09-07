// In the name of Allah, who is the most merciful.

#include <bits/stdc++.h>
using namespace std;

void countingSort(int arr[], int n)
{
    int max = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    int count[max + 1] = {0};

    for(int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    int index = 0;

    for(int i = 0; i <= max; i++)
    {
        while(count[i] > 0)
        {
            arr[index] = i;
            index++;
            count[i]--;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    countingSort(arr, n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}