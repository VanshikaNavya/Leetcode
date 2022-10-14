class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(int i=0; i<s.length(); i++){
            char ch=s[i];
            char a=st.top();
            if(!st.empty() && abs(a-ch)==32){
                st.pop();
            }
            else{
                 st.push(ch);
                }
            }
        string ans="";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
  
};