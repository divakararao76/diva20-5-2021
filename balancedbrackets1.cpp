// to check the given string is balanced brackets ot not
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        
        string s;
        cin>>s;
        stack<char> st;
        int f;
        for(auto j:s)
        {
            switch(j)
            {
                case '{': st.push(j);break;
                case '[': st.push(j);break;
                case '(': st.push(j);break;
                case '}': if(st.empty()|| st.top()!='{')
                            {f=0;break;}
                          st.pop();break;
                case ']': if(st.empty()||st.top()!='[')
                            {f=0;break;}
                          st.pop(); break;
                case ')': if(st.empty()||st.top()!='(')
                          {f=0;break;}
                          st.pop();break;
            }
        }
        f=st.empty()?1:0;
        if(f==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}

/*
output:
2
[{({]}})
YES
{[(}
NO


*/
