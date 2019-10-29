#include<iostream>

using namespace std;
long i ,n,r,k;
     long a[1000000];
int main()
{
     
    cin>>n>>r;
    for(i=0;i<n;i++)
       { 
    int k = (i + (n - r)) % n;
        cin>>a[k];
       }

        for(i=0;i<n;i++)
            cout<<a[i]<<" ";

            return 0;
}

