#include <stack>
#include <string>
#include <iostream>

using namespace std;

string isBalanced(string s) {
    stack<char> st;  
    
    for (auto c: s) {
        switch (c) {
            case '{':
            case '(':
            case '[':
                st.push(c);
                break;
            case '}':
                if (st.empty() || (st.top() != '{')) {
                    return "NO";
                }
                st.pop();
                break;
            case ')':
                if (st.empty() || (st.top() != '(')) {
                    return "NO";
                }
                st.pop();
                break;
            case ']':
                if (st.empty() || (st.top() != '[')) {
                    return "NO";
                }
                st.pop();
                break;
        }
    }
    
    return st.empty() ? "YES" : "NO";
}


int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        string s;
        cin >> s;
        cout << isBalanced(s) << endl;
    }
    return 0;
}
/*output
2
{[(}])
NO
{[()]}
YES


*/
