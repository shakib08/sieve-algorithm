#include<bits/stdc++.h>
using namespace std;

void sieve(int n)
{
    int a[100];
    memset(a, 0, sizeof(a));
    for(int i=2; i*i<=n; i++)
    {
        if(a[i] == 0)
        {
            for(int j = i*i; j<=n; j+=i)
            {
                a[j] = 1;
            }
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(a[i]==0)
        {
            cout<<i<<" ";
        }
    }
}
int main(){
int n;
cin>>n;
sieve(n);
}

