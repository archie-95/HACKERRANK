#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

int main()
{
    char ar[100];
    long long n,count=0,j,r,q;
    int i,len;

    cin>>ar;
    len=strlen(ar);
    cin>>n;
    q=n/len;
    r=n%len;

for(i=0;i<len;i++)
     if(ar[i]=='a')
         count++;

count=count*q;

for(i=0;i<r;i++)
  if (ar[i] == 'a')
    count++;

    cout<<count;
}

