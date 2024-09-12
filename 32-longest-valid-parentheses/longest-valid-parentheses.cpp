class Solution {
public:
    int longestValidParentheses(string s) {
    int n = s.length();
    stack<int> st;
    for(int i=0;i<n;i++)
    {
        if(s[i] == ')')
        {
            if(st.empty()==0)
            {
                int j = st.top();
                st.pop();
                s[i] = '*';
                s[j] = '*';
            }
        }
        if(s[i] == '(')
        {
            st.push(i);
        }
    }
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i] == '*')
        {
            int ct=1;
            i++;
            while(s[i] == '*')
            {
                ct++;
                i++;
            }
            i--;
            ans = max(ans,ct);
        }
    }
    return ans;
    }
};