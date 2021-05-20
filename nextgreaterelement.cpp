#include<iostream>
using  namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m],i;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<m;i++)
    cin>>b[i];
    int next,j;
    for(i=0;i<n;i++)
    {
        next=-1;
        for(j=i;j<m;j++)
        {
            if(a[i]<b[j])
              { next=a[j];
              //j=m-1;
                break;}
        }
        cout<<next<<" ";
    }
    return 0;
}
