#include<iostream>

using namespace std;

 long long ar[10][100000],i,n[10],t,j,k,temp=0,flag=0,count=0;
int main()
{
     
   
    cout<<"kie";
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n[i];
        for(j=0;j<n[i];j++){
            cin>>ar[i][j];}
    }
   

    for(i=0;i<t;i++)
    {
        for(k=0;k<n[i]-1;k++)
        {
            
            for(j=k+1;j<n[i];j++)
            {
                if(ar[i][k]>ar[i][j])
                {
                    temp++;
                    
                }
                if(temp>2)
                {
                    cout<< "Too chaotic\n";
                    flag=1;
                   goto label;
                }
            }
            
                count=count+temp;
                temp=0;
                
        }
       label: if(flag==0)
        cout<<count<<"\n";
        flag=0;
        temp=0;
        count=0;
    }
    
    return(0);
}


