#include<iostream>

using namespace std;
 long long n,m,a[10000002],b[10000002],k[10000003],arr[10000003]={0},i,j,largest=0;
int main()
{  cin>>n>>m;
    for(i=1;i<=m;i++)
    {      
        cin>>a[i]>>b[i]>>k[i];
    }
    for(i=1;i<=m;i++)
    {
        for(j=a[i];j<=b[i];j++)
        {
            arr[j]=arr[j]+k[i];
             if(largest<arr[j])
                largest=arr[j];
        }
    }
    cout<<largest;   
}


