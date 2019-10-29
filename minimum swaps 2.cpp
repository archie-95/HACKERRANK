#include<iostream>
using namespace std;
long n,a[100002],i,count=0,temp;
int main()
{
    
    cin>>n;
    int flag=1;
    for(i=1;i<=n;i++)
        cin>>a[i];       
while(flag==1)
{
    flag=0;
    for(i=1;i<=n;i++)
    {
        if(a[i]==i)
           { //do nothing
           }
        else
        {
            temp=a[i];
            a[i]=a[temp];
            a[temp]=temp;
            count++;
        }
        
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]!=i)
        { 
            flag=1;
            break;
        }       
   }
}
    
cout<<count;
}
