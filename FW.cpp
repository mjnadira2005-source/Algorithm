// In the name of Allah, who is the most merciful.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k;
    cin>>n;
    const int INF=99999;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][k]!=INF&&a[k][j]!=INF)
                {
                    if(a[i][k]+a[k][j]<a[i][j])
                    {
                        a[i][j]=a[i][k]+a[k][j];
                    }
                }
            }
        }
    }

    bool negativeCycle=false;

    for(i=0;i<n;i++)
    {
        if(a[i][i]<0)
        {
            negativeCycle=true;
            break;
        }
    }
    if(negativeCycle)
    {
        cout<<"Negative Cycle Exists"<<endl;
    }
    else
    {
        cout<<"No Negative Cycle"<<endl;

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j]==INF)
                {
                    cout<<"INF ";
                }
                else
                {
                    cout<<a[i][j]<<" ";
                }
            }
            cout<<endl;
        }
    }

    return 0;
}