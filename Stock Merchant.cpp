#include<iostream>

using namespace std;


 int main()
 {
     int n,ar[100],i,j,temp,count=0;
     cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
   
    for (i = 0; i < n - 1; i++)
      for (j = i + 1; j < n; j++)
        if (ar[i] > ar[j]) {
          temp = ar[i];
          ar[i] = ar[j];
          ar[j] = temp;
        }

    i=0;
    while(i<n)
    {
        if(ar[i]==ar[i+1])
        {
            count++;
            i=i+2;
        }
        else
           i= i+1;
    }

    cout<<count;
    
 }
