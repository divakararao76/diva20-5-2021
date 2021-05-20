#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n,i,ans,top;
    cin>>n;
    int a[n];
    stack<int> st;
    for(i =1;i<=n;i++)
    {
        cin>>a[i];
    }
    
    ans =0;
    st.push(0);
    for(i =1;i<=n;i++)
    {
        if(a[i]>0)
            st.push(i);
        else
        {
            top = st.top();
            st.pop();
            if(-1*a[i] == a[top] )
            {
                if(!st.empty())
                    ans=max(ans,abs(i-st.top()));
                else
                    st.push(i);
            }
            else
                st.push(i);
        }
    }
    cout<<ans<<endl;

    return 0;
}
/*
5
1 -1 2 3 -2
2


*/
