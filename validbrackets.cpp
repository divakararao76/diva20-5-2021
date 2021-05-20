#include<iostream>
#include<stack>
using namespace std;
 bool match(char a , char b) 
{
    return ( (a=='(' && b==')') || (a=='[' && b==']') || (a=='{' && b=='}') );
}
bool isValid(string s) 
{
        stack<int> st;
        for(int i=0;i<s.size();i++)
        {
            if (s[i]=='(' || s[i]=='{' || s[i]=='[' ) 
            st.push(s[i]); 
            else 
            {
                if (st.empty()) 
                return false;
                else 
                if (match(st.top(),s[i])==false) 
                return false;
                else 
                st.pop();
            }
        }
        return (st.empty());
    }
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        string str;
        cin>>str;
        int c=isValid(str);
        if(c==1)
        cout<<"true"<<endl;
        else
        cout<<"false"<<endl;
    }
}
/*
output
3
()
true
(){}[]
true
[)
false


*/
