#include<iostream>
using namespace std;
long long p[100001],n,k,i,j,count=0,temp,sum=0;
int main()
{
    
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    for (i = 0; i < n; i++) {

      for (j = 0; j < n - 1; j++) {

        if (p[j] > p[j + 1]) {
          temp = p[j];
          p[j] = p[j + 1];
          p[j + 1] = temp;
        }
      }
    }
    i=0;
    while(sum<=k)
    {
        sum=sum+p[i];
        i++;
    }
    cout<<--i;

}
