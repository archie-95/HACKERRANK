#include<iostream>

using namespace std;

int main()
{
    int n,ar[100],i,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++,count++)
    {
        if(i<n-2 && ar[i+2]==0)
        i++;
    }
    cout<<--count;

}
