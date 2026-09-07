#include<bits/stdc++.h>
using namespace std;

void radixSort(int arr[],int n)
{
    int max=arr[0];

    for(int i=1;i<n;i++)
        if(arr[i]>max)
            max=arr[i];

    for(int exp=1;max/exp>0;exp*=10)
    {
        int bucket[10][100];
        int count[10]={0};

        for(int i=0;i<n;i++)
        {
            int digit=(arr[i]/exp)%10;
            bucket[digit][count[digit]]=arr[i];
            count[digit]++;
        }

        int k=0;

        for(int i=0;i<10;i++)
        {
            for(int j=0;j<count[i];j++)
            {
                arr[k]=bucket[i][j];
                k++;
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    radixSort(arr,n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}