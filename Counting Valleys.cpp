#include<iostream>

using namespace std;

int main()
{
    int i,count=0,flag=0,t=0;
    long int n;
    char ar[1000000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]=='D')
        count--;
        if(ar[i]=='U')
        count++;
        if(t<0&&count==0)
        {flag++;
        }
        t=count;
    }
    cout<<flag;
}

